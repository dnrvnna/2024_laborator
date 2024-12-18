#include <iostream>

using namespace std;

struct Node
{
    int info;
    Node * next;
};

void Print(Node * top)
{
    Node * p = top;
    while (p != nullptr)
    {
        cout << p->info << " ";
        p = p->next;
    }
}

bool Three_digit(Node * top)
{
    Node * p = top;
    if((p->info)/100 > 0 && (p->info)/100 < 9) return true;
    return false;

}

bool Only_even_digits(Node * top)
{
    Node * p = top;
    while ((p->info) > 0)
    {
        int d = (p->info) % 10;
        if(d % 2 != 0) return false;
    }
    return true;
}

int first_digit(Node * top)
{
    Node * p = top;
    int first;
    while((p->info) > 0)
    {
        int y = p->info;
        y /= 10;
        first = y;
    }
    return first;
}

void sort_first_digit(Node * top)
{
    for (Node * a = top; a->next != nullptr; a = a->next)
        for (Node * b = a->next; b->next != nullptr; b = b->next)
            if (first_digit(a) > first_digit(b)) swap(a->info, b->info);
}

bool count_digit_is_even(Node * top)
{
    Node * p = top;
    int y = p->info;
    int counter = 0;
    while(y > 0)
    {
        y /= 10;
        counter++;
    }

    if(counter % 2 == 0) return true;
    return false;
}

void remove_numbers_even(Node * &top)
{
    while (top != nullptr && count_digit_is_even(top))
    {
        Node * temp = top->next;
        delete top;
        top = temp;
    }

    Node * p = top;
    while (p != nullptr && p->next != nullptr)
    {
        Node * temp = p->next;
        if (count_digit_is_even(temp))
        {
            p->next = temp->next;
            delete temp;
        }
        else
        {
            p = temp;
        }
    }
}

void duplicate_numbers(Node * top)
{
    Node * p = top;
    while (p != nullptr)
    {
        if (!count_digit_is_even(p))
        {
            Node * q = new Node;
            q->info = p->info;
            q->next = p->next;
            p->next = q;
            p = q->next;
        }
        else
        {
            p = p->next;
        }
    }
}

void delete_list(Node * top)
{
    Node * p = top;
    while (p != nullptr)
    {
        Node * temp = p->next;
        delete p;
        p = temp;
    }
}

bool has_three_even_degits(Node * top)
{
    Node * p = top;
    while( p->next != 0)
    {
        if(Three_digit(p) && !Only_even_digits(p)) return false;
        p = p->next;
    }
    return true;
}

int main()
{
    Node * top = nullptr;

    int n;
    cin >> n;

    int x;
    cin >> x;

    top = new Node;
    top->info = x;
    top->next = nullptr;


    Node * pp = top;

    for (int i = 1; i < n; i++)
    {
        cin >> x;
        Node * p = new Node;
        pp->next = p;
        p->info = x;
        p->next = nullptr;
        pp = p;
    }

    if(has_three_even_degits(top)) sort_first_digit(top);
    else
    {
        remove_numbers_even(top);
        duplicate_numbers(top);
    }

    Print(top);
    delete_list(top);
    return 0;
}
