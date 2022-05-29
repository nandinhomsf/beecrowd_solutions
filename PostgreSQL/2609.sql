SELECT categories.name, SUM(products.amount)
FROM categories, products
WHERE categories.id = products.id_categories
GROUP BY categories.name;
