#include <stdio.h>

int main ()
{
    int item_type;
    float item_price;
    float benef;

    int enchant_level;
    int nb_rune = 0;
    int compo_needed;
    int number_of_compo1;
    int number_of_compo2;
    int number_of_compo3;
    float compo_price1;
    float compo_price2;
    float compo_price3;
    float compo_total_price;
    float rune_price;
    float soul_price;
    float relic_price;
    float enchant_total_price = 0;
    float work_cost;
    float total_cost;


    printf("item type ?\nenter 1 for one hand\nenter 2 for two hand\nenter 3 for armor or bag\nenter 4 for helmet or boot or cape or off hand\n");
    scanf("%d",&item_type);
    if(item_type != 1 && item_type != 2 && item_type != 3 && item_type != 4)
    {
        printf("erreur\n");
        printf("\nPress Enter to exit...");
        getchar();
        getchar();
        return 0;
    }
    if (item_type == 1)
    {
        nb_rune = 288;
    }
    else if (item_type == 2)
    {
        nb_rune = 384;
    }
    else if (item_type == 3)
    {
        nb_rune = 192;
    }
    else if (item_type == 4)
    {
        nb_rune = 96;
    }



    printf("enchantement level you want ?\nenter 0 or 1 or 2 or 3\n");
    scanf("%d",&enchant_level);
    if(enchant_level != 0 && enchant_level != 1 && enchant_level != 2 && enchant_level != 3)
    {
        printf("erreur\n");
        printf("\nPress Enter to exit...");
        getchar();
        getchar();
        return 0;
    }
    if(enchant_level == 1)
    {
        printf("how much silver for 1 rune\n");
        scanf("%f",&rune_price);
        enchant_total_price = (rune_price * nb_rune); 
        printf("echant total price : %f\n",enchant_total_price);;
    }
    else if(enchant_level == 2)
    {
        printf("how much silver for 1 rune\n");
        scanf("%f",&rune_price);
        printf("how much silver for 1 soul\n");
        scanf("%f",&soul_price);
        enchant_total_price = (rune_price * nb_rune) + (soul_price * nb_rune); 
        printf("echant total price : %f\n",enchant_total_price);
    }
    else if(enchant_level == 3)
    {
        printf("how much silver for 1 rune\n");
        scanf("%f",&rune_price);
        printf("how much silver for 1 soul\n");
        scanf("%f",&soul_price);
        printf("how much silver for 1 relic\n");
        scanf("%f",&relic_price);
        enchant_total_price = (rune_price * nb_rune) + (soul_price * nb_rune) + (relic_price * nb_rune); 
        printf("echant total price : %f\n",enchant_total_price);
    }




    printf("number of different component needed ? enter 2 or 3\n");
    scanf("%d",&compo_needed);
    if(compo_needed != 2 && compo_needed != 3)
    {
        printf("erreur\n");
        printf("\nPress Enter to exit...");
        getchar();
        getchar();
        return 0;
    }

    if(compo_needed == 2)
    {
        printf("how much same component for the first component?\n");
        scanf("%d",&number_of_compo1);

        printf("how much silver for one unit?\n");
        scanf("%f",&compo_price1);

        printf("how much same component for the second component?\n");
        scanf("%d",&number_of_compo2);

        printf("how much silver for one unit?\n");
        scanf("%f",&compo_price2);

        compo_total_price = (compo_price1 * number_of_compo1) + (compo_price2 * number_of_compo2);
        printf("build total price : %f\n",compo_total_price);
    }
    if(compo_needed == 3)
    {
        printf("how much same component for the first component?\n");
        scanf("%d",&number_of_compo1);

        printf("how much silver for one unit?\n");
        scanf("%f",&compo_price1);

        printf("how much same component for the second component?\n");
        scanf("%d",&number_of_compo2);

        printf("how much silver for one unit?\n");
        scanf("%f",&compo_price2);

        printf("how much same component for the third component?\n");
        scanf("%d",&number_of_compo3);

        printf("how much silver for one unit?\n");
        scanf("%f",&compo_price3);

        compo_total_price = (compo_price1 * number_of_compo1) + (compo_price2 * number_of_compo2) + (compo_price3 * number_of_compo3);
        printf("build total price : %f\n",compo_total_price);

    }



    printf("how much it cost to use the workshop\n");
    scanf("%f",&work_cost);
    total_cost = compo_total_price + enchant_total_price + work_cost;
    printf("how much does your item cost at least in the auction house?\n");
    scanf("%f",&item_price);
    item_price = item_price - item_price * 0.06;
    benef=item_price - total_cost;
    printf("you win %f silver\n",benef);

    printf("composent 1 price : %f X %d\n",compo_price1,number_of_compo1);
    printf("composent 2 price : %f X %d\n",compo_price2,number_of_compo2);
    printf("composent 3 price : %f X %d\n",compo_price3,number_of_compo3);

    printf("composent total price : %f\n",compo_total_price);

    printf("rune price : %f X %d\n",rune_price,nb_rune);
    printf("soul price : %f X %d\n",soul_price,nb_rune);
    printf("relic price : %f X %d\n",relic_price,nb_rune);

    printf("enchant total price : %f\n",enchant_total_price);
    printf("total price : %f\n",total_cost);

    printf("\nPress Enter to exit...");
    getchar();
    getchar();
    return 0;
}