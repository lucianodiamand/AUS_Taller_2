#include <stdio.h>

typedef struct {
    char productType[15];
    char productID[4];
    char productDescription[100];
    double productPrice;
    int quantityInStock;
} product_t;    

int read_products(product_t*);

int main() {
    product_t product1;

    read_products(&product1);
}

int read_products(product_t *product) {
    FILE *inFile = fopen("products.csv", "r");

    fscanf(inFile, "%[^,],%[^,],%[^,],%lf,%d", product->productType, 
        product->productID, product->productDescription, 
        &product->productPrice, &product->quantityInStock);

    printf("%s %s %s %lf %d", product->productType, product->productID, 
        product->productDescription, product->productPrice, product->quantityInStock);
}
