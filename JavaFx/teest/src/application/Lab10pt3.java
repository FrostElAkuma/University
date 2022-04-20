package application;

import javafx.application.Application;
import javafx.collections.ObservableList;
import javafx.scene.Scene;
import javafx.scene.layout.Pane;
import javafx.scene.paint.Color;
import javafx.stage.Stage;
import javafx.scene.shape.Arc;
import javafx.scene.shape.ArcType;
import javafx.scene.shape.Circle;
import javafx.scene.shape.Ellipse;
import javafx.scene.shape.Polygon;
import javafx.scene.text.Text;

import javafx.stage.Stage;



public class Lab10pt3 extends Application {

	@Override // Override the start method in the Application class

	public void start(Stage primaryStage) {

		Pane pane = new Pane();
		
		Circle arc1 = new Circle(150, 100, 70);
		arc1.setFill(Color.YELLOW); // Set fill color
		//arc1.setType(ArcType.ROUND); // Set arc type
		arc1.setStroke(Color.BLACK);
		arc1.setStrokeWidth(2);
		
		Ellipse e = new Ellipse(115, 90, 30, 20);
		e.setStroke(Color.BLACK);
		e.setFill(Color.WHITE);
		
		Ellipse e2 = new Ellipse(185, 90, 30, 20);
		e2.setStroke(Color.BLACK);
		e2.setFill(Color.WHITE);
		
		Circle c1 = new Circle(115, 90, 10);
		c1.setFill(Color.BLACK); // Set fill color
		
		Circle c2 = new Circle(185, 90, 10);
		c2.setFill(Color.BLACK); // Set fill color
		
		
		pane.getChildren().addAll(arc1, e, e2, c1, c2);

		
		Polygon polygon = new Polygon();

		ObservableList<Double> list = polygon.getPoints();

		

		list.add(150.0); //x coordinate of the first point

		list.add(100.0); //y coordinate of the first point

		list.add(145.0);

		list.add(110.0);

		list.add(155.0);

		list.add(110.0);

		polygon.setFill(Color.YELLOW);

		polygon.setStroke(Color.BLACK);

		pane.getChildren().add(polygon);

		Arc arc2 = new Arc(180, 110, 50, 50, 200, 70); // I am having problems with his mouth :(
		arc2.setFill(Color.RED); // Set fill color
		arc2.setType(ArcType.CHORD); // Set arc type
		arc2.setStroke(Color.BLACK);
		arc2.setStrokeWidth(2);
		
		pane.getChildren().addAll(arc2);
		// Create a scene and place it in the stage

		Scene scene = new Scene(pane, 300, 200);

		primaryStage.setTitle("ShowPolygon"); // Set the stage title

		primaryStage.setScene(scene); // Place the scene in the stage

		primaryStage.show(); // Display the stage

	}

	

	public static void main(String[] args) {

  	Application.launch(args);

  }

}
