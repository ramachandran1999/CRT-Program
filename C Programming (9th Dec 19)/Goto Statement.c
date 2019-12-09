goto is a label:
it is divided into 2 types:
	1)forward labelling
	2)backward labelling
	syntax:
	1)Forward Labelling
	goto label_name;
	statement-1;
		........
	statement-x;
	label_name:
	body of goto;
	
	2)Backward labelling
	syntax:
	label_name:
		body of goto;
		other statements
	goto label_name;
	
	
