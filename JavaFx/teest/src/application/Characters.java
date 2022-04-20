package application;

import javafx.scene.Scene;
import javafx.scene.image.Image;
import javafx.scene.image.ImageView;
import javafx.scene.layout.Pane;
import javafx.scene.text.Text;
import javafx.stage.Stage;

public class Characters {
	public void start(Stage primaryStage) {
		
		 // Create a pane to hold the texts
		 Pane pane = new Pane();
		 
		 int x = 20;
		 //Download the image from a file 
		 for(int i = 0; i < 6; i++)
		 {
			 Text text1 = new Text(100, 200, "JavaFX");
			 int random_int = (int)Math.floor(Math.random()*(52-1+1)+1); //*(max-min+1)+min
			 Image image = new Image("pics/"+random_int+".png");
			 ImageView imageView = new ImageView(image);
			 pane.getChildren().add(text1);
			 
			 imageView.setFitHeight(100);

			 imageView.setFitWidth(100);

			 

			 imageView.setX(x); //coordinates of the top-left corner

			 imageView.setY(50);
			 x+=120;
		 }
		 
		 	// Create a scene and place it in the stage
			Scene scene = new Scene(pane, 600, 400);//width=600, height=200
			primaryStage.setTitle("Lab 10 JavaFX"); // Set the stage title
			primaryStage.setScene(scene); // Place the scene in the stage
			primaryStage.show(); // Display the stage
	}
}
