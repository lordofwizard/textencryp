import java.util.*;  
class Main{
	public static void main(String args[]){
		for(int i = 0;i < 10; i++){
			Scanner sc= new Scanner(System.in);
			System.out.print("Message ");  
			String str= sc.nextLine();
			for(int z = 0; z < str.length() ; z++){
				int ascChar = (str.charAt(z));
				if(ascChar > 64 && ascChar <78)ascChar += 13;
				else if(ascChar > 78 && ascChar <90)ascChar -= 13;
				else if(ascChar > 96 && ascChar <110)ascChar += 13;
				else if(ascChar > 109 && ascChar <123)ascChar -= 13;
				char ascInt = (char)ascChar;
				System.out.print(ascInt);
}
			System.out.println();
	}
}
}

