Scenario: L'utilisateur entre une chaine vide
	Given j'entre une chaine vide
	When le lexer la decoupe en tokens
	Then il me renvoie une liste de trois tokens de type TOKEN_LIST_START -> WORD -> TOKEN_LIST_END

Scenario: L'utilisateur entre une commande sans arguments
	Given j'entre une commande snas arguments
	When le lexer la decoupe en tokens
	Then il me renvoie trois tokens de type ENTRY_START -> WORD -> ENTRY_END

Scenario: L'utilisateur entre une commande simple avec un seul argument
	Given j'entre une commande avec un seul argument
	When le lexer la decoupe en tokens
	Then il me renvoie une liste quatre tokens de type ENTRY_START -> WORD -> WORD -> ENTRY_END
