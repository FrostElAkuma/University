package application;

import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.layout.Pane;
import javafx.scene.paint.Color;
import javafx.scene.shape.Line;
import javafx.stage.Stage;

public class UAEflag extends Application {

	public void start(Stage primaryStage) {

		// Create a line and place it in the pane
		Pane pane = new Pane();

		//(20,60) coordinates of one end and (70, 150) are the coordinates of the other end
		Line line1 = new Line(0, 0, 0, 200);
		Line line2 = new Line(50, 0, 200, 0);
		Line line3 = new Line(50, 100, 200, 100);
		Line line4 = new Line(50, 200, 200, 200);

		//Line line2 = new Line(30, 50, 50, 100);

		line1.setStrokeWidth(10); //sets the line size to 10

		Color myColor = new Color(0.8, 0.14, 0.333, 0.9);

		line1.setStroke(Color.CYAN);
		line2.setStroke(Color.RED);

		pane.getChildren().addAll(line1, line2);

		//pane.getChildren().add(line2);
		//pane.getChildren().add(line2);

		Scene scene = new Scene(pane, 200, 200);

		primaryStage.setTitle("ShowLine"); // Set the stage title

		primaryStage.setScene(scene); // Place the scene in the stage

		primaryStage.show(); // Display the stage

	}



	

	public static void main(String[] args) 



	{

	 	Application.launch(args);

	}

   

}