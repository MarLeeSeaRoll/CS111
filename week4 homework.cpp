double score;
	
	cout << "Enter your score: "<<endl;
	cin >> score;
	
	if(score >= 85)
		cout <<"You got A+";
	else if (score >= 78)
		cout <<"You got A";
	else if (score >= 71)
		cout<<"You got B+";
	else if (score >= 64)
		cout<<"You got B";
	else if (score >= 57)
		cout<<"You got C+";
	else if (score >= 50)
		cout<<"You got C";
	else if (score >= 40)
		cout<<"You got D";
	else{
		cout<<"You got E";
		cout<<"You need to do this course again!";
	}
	cout<<endl<<endl;
	
	system("PAUSE");
	
	return 0;
}
