#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Node {
    int coeff;
    int power;
    struct Node* next;
};

typedef struct Node* NODE;

// Create new node
NODE getnode() {
    return (NODE)malloc(sizeof(struct Node));
}

// Insert term at end of circular list (decreasing power order)
NODE attach(int c, int p, NODE head) {
    NODE temp = getnode();
    temp->coeff = c;
    temp->power = p;
    
    if (head->next == head) {  // First term
        head->next = temp;
        temp->next = head;
    } else {
        NODE cur = head->next;
        while (cur->next != head) {
            cur = cur->next;
        }
        cur->next = temp;
        temp->next = head;
    }
    return head;
}

// Read polynomial from user
NODE readpoly(NODE head) {
    int c, p, terms;
    printf("Enter number of terms: ");
    scanf("%d", &terms);
    
    printf("Enter %d terms (coeff power):\n", terms);
    for (int i = 0; i < terms; i++) {
        scanf("%d %d", &c, &p);
        head = attach(c, p, head);
    }
    return head;
}

// Display polynomial
void display(NODE head) {
    NODE temp = head->next;
    if (temp == head) {
        printf("0\n");
        return;
    }
    
    do {
        if (temp->coeff > 0 && temp != head->next) printf(" + ");
        printf("%dx^%d", temp->coeff, temp->power);
        temp = temp->next;
    } while (temp != head);
    printf("\n");
}

// Add two polynomials
NODE padd(NODE head1, NODE head2, NODE head3) {
    NODE p = head1->next, q = head2->next, r;
    
    while (p != head1 && q != head2) {
        if (p->power > q->power) {
            head3 = attach(p->coeff, p->power, head3);
            p = p->next;
        } 
        else if (q->power > p->power) {
            head3 = attach(q->coeff, q->power, head3);
            q = q->next;
        } 
        else {
            if ((p->coeff + q->coeff) != 0) {
                head3 = attach(p->coeff + q->coeff, p->power, head3);
            }
            p = p->next;
            q = q->next;
        }
    }
    
    // Add remaining terms from first polynomial
    while (p != head1) {
        head3 = attach(p->coeff, p->power, head3);
        p = p->next;
    }
    
    // Add remaining terms from second polynomial
    while (q != head2) {
        head3 = attach(q->coeff, q->power, head3);
        q = q->next;
    }
    
    return head3;
}

// Evaluate polynomial at given x
float evaluate(NODE head, float x) {
    float result = 0;
    NODE temp = head->next;
    
    do {
        result += temp->coeff * pow(x, temp->power);
        temp = temp->next;
    } while (temp != head);
    
    return result;
}

int main() {
    NODE head1 = getnode(), head2 = getnode(), head3 = getnode();
    int choice;
    float x;
    
    head1->next = head1;  // Initialize circular headers
    head2->next = head2;
    head3->next = head3;
    
    do {
        printf("\n=== Polynomial Operations ===\n");
        printf("1. Create Polynomial 1\n");
        printf("2. Create Polynomial 2\n");
        printf("3. Display Polynomial 1\n");
        printf("4. Display Polynomial 2\n");
        printf("5. Add Polynomials\n");
        printf("6. Display Result\n");
        printf("7. Evaluate Result\n");
        printf("0. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1: head1 = readpoly(head1); break;
            case 2: head2 = readpoly(head2); break;
            case 3: printf("P1(x) = "); display(head1); break;
            case 4: printf("P2(x) = "); display(head2); break;
            case 5: 
                head3->next = head3;  // Reset result
                head3 = padd(head1, head2, head3);
                printf("Polynomials added successfully!\n");
                break;
            case 6: printf("Result = "); display(head3); break;
            case 7: 
                printf("Enter x value: ");
                scanf("%f", &x);
                printf("P(%.2f) = %.2f\n", x, evaluate(head3, x));
                break;
        }
    } while (choice != 0);
    
    // Free memory
    free(head1); free(head2); free(head3);
    return 0;
}
