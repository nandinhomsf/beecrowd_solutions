SELECT products.id, products.name
FROM products, categories
WHERE products.id_categories = categories.id and
    categories.name LIKE 'super%';
