package application;

import javafx.application.Application;

import javafx.scene.Scene;

import javafx.scene.layout.Pane;

import javafx.stage.Stage;

import javafx.scene.image.Image;

import javafx.scene.image.ImageView;



public class lab11 extends Application {



 public void start(Stage primaryStage) {

		 // Create a pane to hold the image views

		 Pane pane = new Pane();

		 
		 int x = 20;
		 //Download the image from a file 
		 for(int i = 0; i < 6; i++)
		 {
			 int random_int = (int)Math.floor(Math.random()*(52-1+1)+1); //*(max-min+1)+min
			 Image image = new Image("pics/"+random_int+".png");
			 ImageView imageView = new ImageView(image);
			 pane.getChildren().add(imageView);
			 
			 imageView.setFitHeight(100);

			 imageView.setFitWidth(100);

			 

			 imageView.setX(x); //coordinates of the top-left corner

			 imageView.setY(50);
			 x+=120;
		 }
		 

		 //ImageView imageView = new ImageView(image);

	 

		 //pane.getChildren().add(imageView);

		 

		 /*imageView.setFitHeight(100);

		 imageView.setFitWidth(100);

		 

		 imageView.setX(80); //coordinates of the top-left corner

		 imageView.setY(80);*/

		 

		 

		 /*ImageView imageView2 = new ImageView(image);

		 

		 pane.getChildren().add(imageView2);

		 

		 imageView2.setFitHeight(100);

		 imageView2.setFitWidth(100);

		 

		 imageView2.setX(170);

		 imageView2.setY(170);*/

		 

		 

		 // Create a scene and place it in the stage

		 Scene scene = new Scene(pane, 750, 300);

		 primaryStage.setTitle("Solitaire"); // Set the stage title

		 primaryStage.setScene(scene); // Place the scene in the stage

		 primaryStage.show(); // Display the stage

	 }

 

	public static void main(String[] args) {

  	Application.launch(args);

  }

 }
