package application;

import javafx.application.Application;

import javafx.scene.Scene;

import javafx.scene.layout.Pane;

import javafx.scene.paint.Color;

import javafx.stage.Stage;

import javafx.scene.shape.Arc;

import javafx.scene.shape.ArcType;

import javafx.scene.shape.Circle;

import javafx.scene.text.Text;



public class lab10 extends Application {

	@Override // Override the start method in the Application class

	public void start(Stage primaryStage) {

		// Create a pane

		Pane pane = new Pane();

		

		//centerX=150, centerY=100

		//radiusX=80, radiusY=80

		//start angle = 0, length = 90

		

		/*Arc a = new Arc(150, 100, 80, 80, 180, 180); // Create an arc

		

		//Angle is positive means it's counter clock-wise

		//Angle is negative means it's clock-wise

		

		a.setFill(Color.RED); // Set fill color

		a.setStroke(Color.RED);

		a.setStrokeWidth(4);

		a.setType(ArcType.ROUND); // Set arc type

		pane.getChildren().add(a); // Add arc to pane

		*/

		

		//Display the upper half of a circle?

		

		//This text is too repetative any better way to do this ?
		Text t1 = new Text(180, 70, "Project");
		Text t2 = new Text(185, 85, "20%");
		t1.setFill(Color.WHITE);
		t2.setFill(Color.WHITE);
		Text t3 = new Text(135, 40, "Quiz");
		Text t4 = new Text(140, 55, "10%");
		t3.setFill(Color.WHITE);
		t4.setFill(Color.WHITE);
		Text t5 = new Text(80, 80, "Midterm");
		Text t6 = new Text(85, 95, "30%");
		t5.setFill(Color.WHITE);
		t6.setFill(Color.WHITE);
		Text t7 = new Text(145, 130, "Final");
		Text t8 = new Text(150, 145, "40%");
		t7.setFill(Color.WHITE);
		t8.setFill(Color.WHITE);
		

		Arc arc1 = new Arc(150, 100, 80, 80, 0, 72); // Create an arc

		arc1.setFill(Color.RED); // Set fill color

		arc1.setType(ArcType.ROUND); // Set arc type

		

		pane.getChildren().add(arc1); // Add arc to pane

	

		Arc arc2 = new Arc(150, 100, 80, 80, 72, 36);	

		arc2.setFill(Color.BLUE);

		//arc2.setType(ArcType.OPEN);
		arc2.setType(ArcType.ROUND);

		//arc2.setStroke(Color.RED);

		//arc2.setStrokeWidth(4);

		pane.getChildren().add(new Text(20, 40, "arc2: open"));

		pane.getChildren().addAll(arc2);

		

		Arc arc3 = new Arc(150, 100, 80, 80, 108, 108);

		arc3.setFill(Color.GREEN);

		//arc3.setType(ArcType.CHORD);
		arc3.setType(ArcType.ROUND);

		//arc3.setStroke(Color.BLACK);

		pane.getChildren().add(new Text(20, 170, "arc3: chord"));

		pane.getChildren().add(arc3);

		

		Arc arc4 = new Arc(150, 100, 80, 80, 216, 144);

		arc4.setFill(Color.ORANGE);

		//arc4.setType(ArcType.CHORD);
		arc4.setType(ArcType.ROUND);

		//arc4.setStroke(Color.BLACK);

		pane.getChildren().add(new Text(210, 170, "arc4: chord"));

		pane.getChildren().addAll(arc4 , t1, t2, t3 ,t4, t5, t6, t7, t8);

		

		

		

		// Create a scene and place it in the stage

		Scene scene = new Scene(pane, 300, 200);

		primaryStage.setTitle("ShowArc"); // Set the stage title

		primaryStage.setScene(scene); // Place the scene in the stage

		primaryStage.show(); // Display the stage

	}

	

	public static void main(String[] args) {

  	Application.launch(args);

  }

}