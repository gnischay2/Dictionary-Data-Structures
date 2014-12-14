#include<stdio.h>
#include<conio.h>
#include<alloc.h>

struct snode
{
struct snode *right;
FILE *fp1;
};
typedef struct snode snode;

struct dnode
{
snode *right;
xnode *down;
};
typedef struct dnode dnode;

struct intronode
{
snode *right1;
snode *right2;
snode *right3;
snode *right4;
snode *right5;
snode *right6;
xnode *down;		
};
typedef struct intronode intronode;

struct linknode
{
snode *right1;
snode *right2;
snode *right3;
xnode *down;
};
typedef struct linknode linknode;


void index()
{
	printf("Welcome to HTML5 BASICS tutorial\n");
	printf("Enter the serial no. corresponding to the topic you wish to study\n");
	printf("1.  HTML Introduction\n");
	printf("2.  HTML HEADINGS");
	printf("3.  HTML PARAGRAPHS");
	printf("4.  HTML TEXT FORMATTING");
	printf("5.  HTML HYPERLINKS");
	printf("6.  HTML CSS");
	printf("7.  HTML IMAGES");
	printf("8.  HTML TABLES");
	printf("9.  HTML LISTS");
	printf("10. HTML LAYOUTS");
	printf("11. HTML FORMS");
}



intronode *intro()
{
	intronode *ptr;
	ptr=(intronode *)malloc(sizeof(intronode));
	ptr->down=NULL;
	ptr->right1->fp1=fopen("Introduction1.txt","r");
	ch=getc(ptr->right1->fp1);
	while(ch!=EOF)
	{
		fscanf(ptr->right1->fp1,"%s",s);
		printf("%s",s);
		ch=getc(ptr->right1->fp1);
	}
	fclose(ptr->right1->fp1);
	
	
	ptr->right2->fp1=fopen("Introduction2.txt","r");
	ch=getc(ptr->right2->fp1);
	while(ch!=EOF)
	{
		fscanf(ptr->right2->fp1,"%s",s);
		printf("%s",s);
		ch=getc(ptr->right2->fp1);

	}
	fclose(ptr->right2->fp1);
	
	
	ptr->right3->fp1=fopen("Introduction3.txt","r");
	ch=getc(ptr->right3->fp1);
	while(ch!=EOF)
	{
		fscanf(ptr->right3->fp1,"%s",s);
		printf("%s",s);
		ch=getc(ptr->right3->fp1);
	}
	fclose(ptr->right3->fp1);
	
	
	ptr->right4->fp1=fopen("Introduction4.txt","r");
	ch=getc(ptr->right4->fp1);
	while(ch!=EOF)
	{
		fscanf(ptr->right4->fp1,"%s",s);
		printf("%s",s);
		ch=getc(ptr->right4->fp1);
	}
	fclose(ptr->right4->fp1);
	
	ptr->right5->fp1=fopen("Introduction5.txt","r");
	ch=getc(ptr->right5->fp1);
	while(ch!=EOF)
	{
		fscanf(ptr->right5->fp1,"%s",s);
		printf("%s",s);
		ch=getc(ptr->right5->fp1);
	}
	fclose(ptr->right5->fp1);
	
	ptr->right6->fp1=fopen("Introduction6.txt","r");
	ch=getc(ptr->right6->fp1);
	while(ch!=EOF)
	{
		fscanf(ptr->right6->fp1,,"%s",s);
		printf("%s",s);
		ch=getc(ptr->right6->fp1);
	}
	fclose(ptr->right6->fp1);	
	
	return ptr;
}



dnode *HTMLheading()
{
	dnode *ptr2=(dnode *)malloc(sizeof(dnode));
	ptr2->down=NULL:
	ptr2->right->fp1=fopen("HTML HEADINGS.txt","r");
	ch=getc(ptr2->right->fp1);
	while(ch!=EOF)
	{
		fscanf(ptr2->right->fp1,"%s",s);
		printf("%s",s);
	}
	return ptr2;
}


dnode *HTMLparagraph()
{
	dnode *ptr3=(dnode *)malloc(sizeof(dnode));
	ptr3->down=NULL:
	ptr3->right->fp1=fopen("HTML Paragraphs.txt","r");
	ch=getc(ptr3->right->fp1);
	while(ch!=EOF)
 	{
		fscanf(ptr3->right->fp1,"%s",s);
		printf("%s",s);
	}
	return ptr3;
}

dnode *HTMLtextFormat()
{
	dnode *ptr4=(dnode *)malloc(sizeof(dnode));
	ptr4->down=NULL:
	ptr4->right->fp1=fopen("HTML TextFormat.txt","r");
	ch=getc(ptr4->right->fp1);
	while(ch!=EOF)
	{
		fscanf(ptr4->right->fp1,"%s",s);
		printf("%s",s);
	}
	return ptr4;
}


linknode *HTMLhyperlink()
{
	linknode *ptr5=(linknode *)malloc(sizeof(linknode));
	ptr5->down=NULL;
	ptr5->right1->fp1=fopen("HTML Hyperlinks1.txt","r");
	ch=getc(ptr5->right1->fp1);
	while(ch!=EOF)
	{
		fscanf(ptr5->right1->fp1,"%s",s);
		printf("%s",s);
		ch=getc(ptr5->right1->fp1);
	}
	fclose(ptr5->right1->fp1);
	
	
	ptr5->right2->fp1=fopen("HTML Hyperlinks2.txt","r");
	ch=getc(ptr5->right2->fp1);
	while(ch!=EOF)
	{
		fscanf(ptr5->right2->fp1,"%s",s);
		printf("%s",s);
		ch=getc(ptr5->right2->fp1);

	}
	fclose(ptr5->right2->fp1);
	
	
	ptr5->right3->fp1=fopen("HTML Hyperlinks3.txt","r");
	ch=getc(ptr5->right3->fp1);
	while(ch!=EOF)
	{
		fscanf(ptr5->right3->fp1,"%s",s);
		printf("%s",s);
		ch=getc(ptr5->right3->fp1);
	}
	fclose(ptr5->right3->fp1);
	
	return ptr5;

}



linknode *HTML_CSS()
{
	linknode *ptr6=(linknode *)malloc(sizeof(linknode));
	ptr6->down=NULL;
	ptr6->right1->fp1=fopen("HTMLCSS1.txt","r");
	ch=getc(ptr6->right1->fp1);
	while(ch!=EOF)
	{
		fscanf(ptr6->right1->fp1,"%s",s);
		printf("%s",s);
		ch=getc(ptr6->right1->fp1);
	}
	fclose(ptr6->right1->fp1);
	
	
	ptr6->right2->fp1=fopen("HTMLCSS2.txt","r");
	ch=getc(ptr6->right2->fp1);
	while(ch!=EOF)
	{
		fscanf(ptr6->right2->fp1,"%s",s);
		printf("%s",s);
		ch=getc(ptr6->right2->fp1);

	}
	fclose(ptr6->right2->fp1);
	
	
	ptr6->right3->fp1=fopen("HTMLCSS3.txt","r");
	ch=getc(ptr6->right3->fp1);
	while(ch!=EOF)
	{
		fscanf(ptr6->right3->fp1,"%s",s);
		printf("%s",s);
		ch=getc(ptr6->right3->fp1);
	}
	fclose(ptr6->right3->fp1);
	
	return ptr6;

}