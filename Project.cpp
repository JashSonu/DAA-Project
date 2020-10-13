#include<iostream>
#include<cstdio>
#include<math.h>
#include<time.h>
#include<conio.h>
#include<cstring>
#include<string.h>
#include<string>
#include<stdlib.h>
using namespace std;
static int code=21;
char choice1,choice,choice2,choice3,choice4;

void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;

    // Storing start time
    clock_t start_time = clock();

    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds)
        ;
}

struct node                                              // Creation of Linked list
{
    string name;                                           // name of items in Inventory
    int stock;                                             // Number of items in Inventory
    float price;                                          // Price of items in Inventory
    float discount;                                        // Discount of items in Inventory
    float tax;                                             // Tax of items in Inventory
    int index;                                             // Serial number of items in Inventory
    struct node *next;
};
node* head=NULL;                                         // Creation of Head of Linked list
void database()                                          // hard coded items in Inventory
{
    node* one= new node;
    node* two= new node;
    node* three= new node;
    node* four= new node;
    node* five= new node;
    node* six= new node;
    node* seven= new node;
    node* eight= new node;
    node* nine= new node;
    node* ten= new node;
    node* eleven= new node;
    node* twelve= new node;
    node* thirteen= new node;
    node* fourteen= new node;
    node* fifteen= new node;
    node* sixteen= new node;
    node* seventeen= new node;
    node* eighteen= new node;
    node* nineteen= new node;
    node* twenty= new node;

            one->name="Madhur Sugar (250 grams)";                       //Item 1 in Inventory
            one->stock=50;
            one->price=25;
            one->index=1;
            one->discount=9.5;
            one->tax=0.06;
            one->next=two;

            two->name="Taj Tea (250 grams)";                           //Item 2 in Inventory
            two->stock=30;
            two->price=40;
            two->index=2;
            two->discount=5.5;
            two->tax=0.06;
            two->next=three;

            three->name="Balaji Wafers (500 grams)";                  //Item 3 in Inventory
            three->stock=50;
            three->price=60;
            three->index=3;
            three->discount=9.5;
            three->tax=0.06;
            three->next=four;

            four->name="Cadbury Celebrations";                       //Item 4 in Inventory
            four->stock=20;
            four->price=100;
            four->index=4;
            four->discount=5.5;
            four->tax=0.06;
            four->next=five;

            five->name="Amul Gold Milk(1 L)";                       //Item 5 in Inventory
            five->stock=50;
            five->price=60;
            five->index=5;
            five->discount=2.5;
            five->tax=0.06;
            five->next=six;

            six->name="Coca Cola (200 ml)";                        //Item 6 in Inventory
            six->stock=30;
            six->price=20;
            six->index=6;
            six->discount=5.5;
            six->tax=0.06;
            six->next=seven;

            seven->name="MDH Garam Masala (100 grams)";            //Item 7 in Inventory
            seven->stock=30;
            seven->price=55;
            seven->index=7;
            seven->discount=2.5;
            seven->tax=0.06;
            seven->next=eight;

            eight->name="Amul Ghee (500 ml)";                     //Item 8 in Inventory
            eight->stock=20;
            eight->price=200;
            eight->index=8;
            eight->discount=4.5;
            eight->tax=0.06;
            eight->next=nine;

            nine->name="Aashirwad Aata (1 kg)";                  //Item 9 in Inventory
            nine->stock=20;
            nine->price=175;
            nine->index=9;
            nine->discount=3.5;
            nine->tax=0.06;
            nine->next=ten;


            ten->name="Act2 Popcorn (200 grams)";                //Item 10 in Inventory
            ten->stock=15;
            ten->price=25;
            ten->index=10;
            ten->discount=1.5;
            ten->tax=0.06;
            ten->next=eleven;

            eleven->name="Fogg Deo(200 ml)";                     // Item 11 in Inventory
            eleven->stock=15;
            eleven->price=225;
            eleven->index=11;
            eleven->discount=2.5;
            eleven->tax=0.06;
            eleven->next=twelve;


            twelve->name="Sunsilk Shampoo (375 ml)";             //Item 12 in Inventory
            twelve->stock=10;
            twelve->price=195;
            twelve->index=12;
            twelve->discount=2.5;
            twelve->tax=0.06;
            twelve->next=thirteen;


            thirteen->name="McCain French Fries (500 grams)";    //Item 13 in Inventory
            thirteen->stock=10;
            thirteen->price=125;
            thirteen->index=13;
            thirteen->discount=2.5;
            thirteen->tax=0.06;
            thirteen->next=fourteen;


            fourteen->name="Kissan Mixfruit Jam (200 grams)";    //Item 14 in Inventory
            fourteen->stock=15;
            fourteen->price=60;
            fourteen->index=14;
            fourteen->discount=5.5;
            fourteen->tax=0.06;
            fourteen->next=fifteen;


            fifteen->name="Kelloggs Cornflakes (500 grams)";    //Item 15 in Inventory
            fifteen->stock=15;
            fifteen->price=80;
            fifteen->index=15;
            fifteen->discount=7.5;
            fifteen->tax=0.06;
            fifteen->next=sixteen;


            sixteen->name="Moong Daal (250 grams)";            //Item 16 in Inventory
            sixteen->stock=25;
            sixteen->price=35;
            sixteen->index=16;
            sixteen->discount=3.5;
            sixteen->tax=0.06;
            sixteen->next=seventeen;

            seventeen->name="Fortune Sunflower Oil (5 L)";     //Item 17 in Inventory
            seventeen->stock=20;
            seventeen->price=350;
            seventeen->index=17;
            seventeen->discount=8.5;
            seventeen->tax=0.06;
            seventeen->next=eighteen;

            eighteen->name="Chings Schezwan Chutney";         //Item 18 in Inventory
            eighteen->stock=20;
            eighteen->price=45;
            eighteen->index=18;
            eighteen->discount=6.5;
            eighteen->tax=0.06;
            eighteen->next=nineteen;

            nineteen->name="Britannia Bourbon";               //Item 19 in Inventory
            nineteen->stock=40;
            nineteen->price=20;
            nineteen->index=19;
            nineteen->discount=1.5;
            nineteen->tax=0.06;
            nineteen->next=twenty;

            twenty->name="Parle G";                           //Item 20 in Inventory
            twenty->stock=40;
            twenty->price=15;
            twenty->index=20;
            twenty->discount=1.5;
            twenty->tax=0.06;
            twenty->next=NULL;
            head=one;



}
void insertend()                              // Inserting new item at the end of linked list
{
        node* current=new node;
        int stock1;
        float discount1;
        string name1;
        double pr;
        cout<<"\t\t\t\t\tEnter the Product Name :\t";          // Entering name of the new item
        cin>>name1;
        current->name=name1;
        do
        {
            cout<<"\t\t\t\t\tEnter the Stock Available :\t";   // Entering stock of the new item
            cin>>stock1;
            if(stock1!=0 && stock1>0)
            {
                current->stock=stock1;

            }
            else
            {
                cout<<"\t\t\t\t\tStock Cannot Be 0 or Negative"<<endl;

            }

        }while(stock1<=0);

        do
        {
            cout<<"\t\t\t\t\tEnter the Price:\t";             // Entering price of the new item
            cin>>pr;
            if(pr!=0 && pr>0)
            {
                current->price=pr;
            }
            else
            {
                cout<<"\t\t\t\t\tPrice Cannot Be 0 or Negative"<<endl;
            }
        }while(pr<=0);

        do
        {
            cout<<"\t\t\t\t\tEnter the Discount:\t";         // Entering discount of the new item
            cin>>discount1;
            if(discount1!=0 && discount1>0)
            {
                current->discount=discount1;
            }
            else
            {
                cout<<"\t\t\t\t\tDiscount Cannot Be Negative"<<endl;
            }
        }while(discount1<0);

        cout<<"\t\t\t\t\tTax On All Products= 6%"<<endl;    // Displaying tax of 6% on each product

        current->index=code;
        current->tax=0.06;
        node*temp;                                          // inserting new node at end for new product
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=current;
        current->next=NULL;
        code++;
        return;
}

void update()                                               // Update details of item in Inventory
{
    int index1,upstock,newprice,counter=0;
    float discount2;
    node* temp;
    temp=head;
    node* temp1;
    temp1=head;
    int count1=1;
    while(temp!=NULL)                                           // Display details of items in Inventory
    {
            cout<<"\t\t["<<temp->index<<"]";
            cout<<"\tName:"<<"\t"<<temp->name<<"\t";
            if((temp->name).length()>10 && (temp->name).length()<23)
            {
                cout<<"\t";
            }
            else if((temp->name).length()<=10)
            {
                cout<<"\t\t\t";
            }
            cout<<"\tStock:"<<"\t"<<temp->stock;
            cout<<"\tPrice:"<<"\t"<<"Rs."<<temp->price<<"\t\t";
            cout<<"Discount:"<<"   "<<temp->discount<<"%"<<endl;
            temp=temp->next;
            count1++;
    }
    cout<<endl;
    cout<<"\t\t\t\t\tEnter Product Code to be Updated:"<<endl<<"\t\t\t\t\t\t\t";      // Code of item in Inventory to be updated
    cin>>index1;

    while(temp1!=NULL)                                      // To go to the index of the item to be updated
        {
            if(temp1->index==index1)
            {
                counter++;                                         // to check if any such item exists
                break;
            }
            temp1=temp1->next;
        }
        if(counter!=0)                                         // if item exists
        {
            cout<<"\t\t\t\t\t\t"<<temp1->name<<endl;
            cout<<"\t\t\t\tEnter New Stock:\t\t";                     // To add Stock to the existing stock(new stock will be added to old stock)
            cin>>upstock;
            temp1->stock=temp1->stock+upstock;
            cout<<"\t\t\t\tEnter New Price:\t\t";           // To replace old price with new price
            cin>>newprice;
            temp1->price=newprice;
            cout<<"\t\t\t\tEnter New Discount:\t\t";        // To replace old discount with new discount
            cin>>discount2;
            temp1->discount=discount2;
            cout<<"\t\t\t\t\t\tNew Details:"<<endl;                // Printing new details
            cout<<"\t\t\t\tProduct Code"<<"\tName"<<"\tStock"<<"\tPrice"<<"\tDiscount"<<"\tTax"<<endl;
            cout<<"\t\t\t\t"<<temp1->index<<"\t\t"<<temp1->name<<"\t"<<temp1->stock<<"\t"<<temp1->price<<"\t"<<temp1->discount<<"\t\t"<<"6%"<<endl;
        }
        else                               // if item does not exist
        {
            cout<<"Product Not Found."<<endl;
        }
}

node* CombineSorted(node* a, node* b);                      //function prototypes
void MidpointSplit(node* source,node** frontRef, node** backRef);     //function prototypes

void printList(node* node)
{
    int count1=1;
    while (node != NULL) {
        cout<<" "<<count1<<") ";
        cout<<" \t Name:"<<"\t"<<node->name<<"\t";
        if((node->name).length()>10 && (node->name).length()<24)
        {
            cout<<"\t";
        }
        else if((node->name).length()<=10)
        {
            cout<<"\t\t\t";
        }
        cout<<" \t Stock Available:"<<"  "<<node->stock;
        cout<<" \t Discount:"<<"  "<<node->discount<<"%";
        cout<<" \t Price:"<<"\t"<<"Rs. "<<node->price;
        cout<<"  \t Tax:"<<"\t"<<"6 %";
        cout<<""<<endl;
        node = node->next;
        count1++;
    }
    cout<<endl;
}

void filter(node* node)
{
    if(choice4=='1')
    {
        cout<<"\t\t\t\t\tEnter Initial of Product"<<endl;
        char c;
        cin>>c;
        while(node!=NULL)
        {
             if(node->name[0]==toupper(c))
                {
                    cout<<" \t Name:"<<"\t"<<node->name<<"\t";
                    if((node->name).length()>10 && (node->name).length()<24)
                    {
                        cout<<"\t";
                    }
                    else if((node->name).length()<=10)
                    {
                        cout<<"\t\t\t";
                    }
                    cout<<" \t Stock Available:"<<"  "<<node->stock;
                    cout<<" \t Discount:"<<"  "<<node->discount<<"%";
                    cout<<" \t Price:"<<""<<"Rs. "<<node->price<<"\t";
                    cout<<" \t Tax:"<<"\t"<<"6 %";
                    cout<<endl;

                }
                node=node->next;

        }

    }
    else if(choice4=='2')
    {
        int filterprice;
        cout<<"\t\t\t\t\tEnter [1] to see products having price less than 60 Rs."<<endl;
        cout<<"\t\t\t\t\tEnter [2] to see products having price more than 60 Rs. and less than 120 Rs."<<endl;
        cout<<"\t\t\t\t\tEnter [3] to see products having price more than 120 Rs."<<endl;
        cin>>filterprice;
        if(filterprice==1)
        {
            while(node!=NULL)
            {
                if(node->price<=60)
                {
                    cout<<" \t Name:"<<"\t"<<node->name<<"\t";
                    if((node->name).length()>10 && (node->name).length()<24)
                    {
                        cout<<"\t";
                    }
                    else if((node->name).length()<=10)
                    {
                        cout<<"\t\t\t";
                    }
                    cout<<" \t Stock Available:"<<"\t"<<node->stock;
                    cout<<" \t Discount"<<"\t"<<node->discount<<"%";
                    cout<<" \t Price"<<"\t"<<"Rs: "<<node->price<<"\t";
                    cout<<" \t Tax"<<"\t"<<"6 %";
                    cout<<endl;
                }
                node=node->next;
            }
        }
        if(filterprice==2)
        {
            while(node!=NULL)
            {
                if(node->price>60 && node->price<=120)
                {
                    cout<<" \t Name:"<<"\t"<<node->name<<"\t";
                    if((node->name).length()>10 && (node->name).length()<24)
                    {
                        cout<<"\t";
                    }
                    else if((node->name).length()<=10)
                    {
                        cout<<"\t\t\t";
                    }
                    cout<<" \t Stock Available:"<<"\t"<<node->stock;
                    cout<<" \t Discount"<<"\t"<<node->discount<<"%";
                    cout<<" \t Price"<<"\t"<<"Rs: "<<node->price<<"\t";
                    cout<<" \t Tax"<<"\t"<<"6 %";
                    cout<<endl;
                }
                node=node->next;
            }
        }
        if(filterprice==3)
        {
            while(node!=NULL)
            {
                if(node->price>120)
                {
                    cout<<" \t Name:"<<"\t"<<node->name<<"\t";
                    if((node->name).length()>10 && (node->name).length()<24)
                    {
                        cout<<"\t";
                    }
                    else if((node->name).length()<=10)
                    {
                        cout<<"\t\t\t";
                    }
                    cout<<" \t Stock Available:"<<"\t"<<node->stock;
                    cout<<" \t Discount"<<"\t"<<node->discount<<"%";
                    cout<<" \t Price"<<"\t"<<"Rs: "<<node->price<<"\t";
                    cout<<" \t Tax"<<"\t"<<"6 %";
                    cout<<endl;
                }
                node=node->next;
            }
        }
    }
    else if(choice4=='3')
    {
        int filterdis;
        cout<<"\t\t\t\t\tEnter [1] to see products having discount less than 3 %"<<endl;
        cout<<"\t\t\t\t\tEnter [2] to see products having discount more than 3 % and less than 6 %"<<endl;
        cout<<"\t\t\t\t\tEnter [3] to see products having discount more than 6%"<<endl;
        cin>>filterdis;
        if(filterdis==1)
        {
            while(node!=NULL)
            {
                if(node->discount<=3)
                {
                    cout<<" \t Name:"<<"\t"<<node->name<<"\t";
                    if((node->name).length()>10 && (node->name).length()<24)
                    {
                        cout<<"\t";
                    }
                    else if((node->name).length()<=10)
                    {
                        cout<<"\t\t\t";
                    }
                    cout<<" \t Stock Available:"<<"\t"<<node->stock;
                    cout<<" \t Discount"<<"\t"<<node->discount<<"%";
                    cout<<" \t Price"<<"\t"<<"Rs: "<<node->price<<"\t";
                    cout<<" \t Tax"<<"\t"<<"6 %";
                    cout<<endl;
                }
                node=node->next;
            }
        }
        if(filterdis==2)
        {
            while(node!=NULL)
            {
                if(node->discount>3 && node->discount<=6)
                {
                    cout<<" \t Name:"<<"\t"<<node->name<<"\t";
                    if((node->name).length()>10 && (node->name).length()<24)
                    {
                        cout<<"\t";
                    }
                    else if((node->name).length()<=10)
                    {
                        cout<<"\t\t\t";
                    }
                    cout<<" \t Stock Available:"<<"\t"<<node->stock;
                    cout<<" \t Discount"<<"\t"<<node->discount<<"%";
                    cout<<" \t Price"<<"\t"<<"Rs: "<<node->price<<"\t";
                    cout<<" \t Tax"<<"\t"<<"6 %";
                    cout<<endl;
                }
                node=node->next;
            }
        }
        if(filterdis==3)
        {
            while(node!=NULL)
            {
                if(node->discount>6)
                {
                    cout<<" \t Name:"<<"\t"<<node->name<<"\t";
                    if((node->name).length()>10 && (node->name).length()<24)
                    {
                        cout<<"\t";
                    }
                    else if((node->name).length()<=10)
                    {
                        cout<<"\t\t\t";
                    }
                    cout<<" \t Stock Available:"<<"\t"<<node->stock;
                    cout<<" \t Discount"<<"\t"<<node->discount<<"%";
                    cout<<" \t Price"<<"\t"<<"Rs: "<<node->price<<"\t";
                    cout<<" \t Tax"<<"\t"<<"6 %";
                    cout<<endl;
                }
                node=node->next;
            }
        }
    }
    else
    {
        cout<<"Wrong Choice"<<endl;

    }
}


void mergeSort(node** headref)          //sorts the linked list by changing next pointers
{
    node* head = *headref;
    node* a;
    node* b;
    if ((head == NULL) || (head->next == NULL))
    {
        return;
    }
    MidpointSplit(head, &a, &b);

    mergeSort(&a);
    mergeSort(&b);

    *headref = CombineSorted(a, b);

}

node* CombineSorted(node* a, node* b)   //Merge two sorted linked lists
{
    node* result = NULL;

    /* Base cases */
    if (a == NULL)
        return (b);
    else if (b == NULL)
        return (a);

    if(choice3=='1')
    {
        /* Pick either a or b, and recur */
        if (a->name <= b->name) {
            result = a;
            result->next = CombineSorted(a->next, b);
        }
        else {
            result = b;
            result->next = CombineSorted(a, b->next);
        }
        return (result);
    }
    else if(choice3=='2')
    {
        /* Pick either a or b, and recur */
        if (a->price <= b->price) {
            result = a;
            result->next = CombineSorted(a->next, b);
        }
        else {
            result = b;
            result->next = CombineSorted(a, b->next);
        }
        return (result);
    }
    else if(choice3=='3')
    {
        /* Pick either a or b, and recur */
        if (a->stock <= b->stock) {
            result = a;
            result->next = CombineSorted(a->next, b);
        }
        else {
            result = b;
            result->next = CombineSorted(a, b->next);
        }
        return (result);

    }
    else
    {
        /* Pick either a or b, and recur */
        if (a->discount <= b->discount) {
            result = a;
            result->next = CombineSorted(a->next, b);
        }
        else {
            result = b;
            result->next = CombineSorted(a, b->next);
        }
        return (result);
    }

}

void MidpointSplit(node* source,
                    node** frontRef, node** backRef)        /*Split the nodes of the given list into front and back halves
                                                            ,and return the two lists using the reference parameters.
                                                            If the length is odd, the extra node should go in the front list.*/
{
    node* front;
    node* back;
    back = source;
    front = source->next;

    /* Advance 'front' two nodes, and advance 'back' one node */
    while (front != NULL) {
        front = front->next;
        if (front != NULL) {
            back = back->next;
            front = front->next;
        }
    }

    /* 'back' is before the midpoint in the list, so split it in two
    at that point. */
    *frontRef = source;
    *backRef = back->next;
    back->next = NULL;
}

int main()
{
    system("Color 0A");                                     // Color code
    char flag;
    string pass="3993";
    database();                                             // Importing database from function
    cout<<"\t\t\t\t\t\t\t  -----Inventory-----"<<endl<<endl<<endl;
    do                                                      // To run code till the user wants
    {
        cout<<"\t\t\t\t\t\t***************************************"<<endl;
        cout<<"\t\t\t\t\t\t[1]Login into System        [2]Exit"<<endl;
        cout<<"\t\t\t\t\t\t***************************************"<<endl;
        cin>>choice1;
        if(isdigit(choice1)!=0)
        {
            switch(choice1)                                  // Different cases according to user input
            {
            case '1':                                              // Manager mode is selected
               cout<<"\t\t\t\t\t\t\tEnter Password"<<endl;           // Password to hide manager functions from others
               cout<<"\t\t\t\t\t\t\t\t";
               for(int i=0;i<4;i++)
               {
                   pass[i]=getch();
                   cout<<"*";                                       //printing * in password for security
               }
               cout<<endl;
               if(pass[0]=='3' && pass[1]=='9' && pass[2]=='9' && pass[3]=='3')
               {
                   do
                   {
                        system("CLS");                                // Clearing screen
                        system("Color E4");                           // Color coding of manager mode
                        cout<<"\t\t\t\t\t\t\t\tWelcome Manager"<<endl<<endl<<endl;
                        cout<<"\t\t\t\t\t\t\t1) Insert New Product:"<<endl;
                        cout<<"\t\t\t\t\t\t\t2) Update Details Product:"<<endl;
                        cout<<"\t\t\t\t\t\t\t3) Available Products In Stock."<<endl;
                        cout<<"\t\t\t\t\t\t\t4) Exit."<<endl;
                        cin>>choice;
                        cout<<endl;

                            switch(choice)
                            {
                            case '1':             // Inserting new item at the end of linked list
                                insertend();
                                break;
                            case '2':
                                update();        // Updating already present items
                                cout<<"\t\t\t\t\t\t\t\t Press any key to Exit View"<<endl<<"\t\t\t\t\t\t\t\t\t";
                                cin>>flag;
                                break;

                            case '3':
                                cout<<"\t\t\t\t\tPress [1] to Sort Products"<<"\t\tPress [2] to Filter Products"<<endl;
                                cin>>choice2;

                                    switch(choice2)             // Sorting of basis of Name, Price, Stock and Discount
                                    {
                                    case '1':
                                        cout<<"\t\t\t\t\t\t\tPress [1] to Sort using Name"<<endl;
                                        cout<<"\t\t\t\t\t\t\tPress [2] to Sort using Price"<<endl;
                                        cout<<"\t\t\t\t\t\t\tPress [3] to Sort using Stock"<<endl;
                                        cout<<"\t\t\t\t\t\t\tPress [4] to Sort using Discount"<<endl;
                                        cin>>choice3;
                                        switch(choice3)
                                        {
                                        case '1':
                                            mergeSort(&head);
                                            cout << "Sorted With Name: \n";
                                            printList(head);
                                            break;
                                        case '2':
                                            mergeSort(&head);
                                            cout << "Sorted With Price: \n";
                                            printList(head);
                                            break;
                                        case '3':
                                            mergeSort(&head);
                                            cout << "Sorted With Stock: \n";
                                            printList(head);
                                            break;
                                        case '4':
                                            mergeSort(&head);
                                            cout << "Sorted With Stock: \n";
                                            printList(head);
                                            break;
                                        default:
                                            cout<<"\t\t\t\t\t\t\t\tWrong Choice"<<endl;       // Any other input than the already provided functionality
                                            break;


                                        }
                                        break;

                                    case '2':               // Filtering data on basis of Name, Price and discount of Products
                                        cout<<"\t\t\t\t\t\tPress [1] to Filter using Letter of Product"<<endl;
                                        cout<<"\t\t\t\t\t\tPress [2] to Filter using Price"<<endl;
                                        cout<<"\t\t\t\t\t\tPress [3] to Filter using Discount"<<endl;
                                        cin>>choice4;
                                        switch(choice4)
                                        {
                                        case '1':
                                            filter(head);
                                            break;
                                        case '2':
                                            filter(head);
                                            break;
                                        case '3':
                                            filter(head);
                                            break;
                                        default:
                                            cout<<"\t\t\t\t\t\t\tWrong Choice"<<endl;              //Any other input than the provided
                                            break;
                                        }
                                        break;

                                    default:
                                        cout<<"\t\t\t\t\t\t\t\tWrong Choice"<<endl;            // Any other input than the already provided functionality
                                        break;
                                    }




                                                                // Displaying present items
                                cout<<"\t\t\t\t\t\t\t Press any key to Exit View"<<endl<<"\t\t\t\t\t\t\t\t\t";
                                cin>>flag;
                                break;
                            case '4':
                                system("CLS");                                          // Clear screen
                                system("Color 0A");
                                cout<<"\t\t\t\t\t\t\t\tLogging Out."<<endl;            // Choice to Exit
                                delay(5);
                                return 0;
                                break;
                            default:
                                cout<<"\t\t\t\t\t\tWrong Choice"<<endl;
                                delay(2);   // Any other input than the already provided functionality
                                break;
                            }


                    }while(choice!='4');                                       //Condition for loop to stay in manager mode

                }
                else
                {
                   cout<<"\t\t\t\t\t\t\tIncorrect Password."<<endl;      // If password is incorrect
                   break;
                }
                break;
            case '2':
                system("CLS");                                          // Clear screen
                system("Color 0A");                                     // Color scheme
                cout<<"\t\t\t\t\t\t\t\tSoftware Shutting Down......"<<endl;  // If choice to exit is selected in general mode
                delay(5);
                break;
            default:
                cout<<"\t\t\t\t\t\t\tWrong Choice."<<endl;                // If input is different than the given options

            }

        }
        else
        {
            cout<<"\t\t\t\t\t\t\tEnter Numbers"<<endl;   // If input is not in numbers
        }



    }while(choice1!='2');                          // Condition to run program in a loop

}

