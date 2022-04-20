package application;

import javafx.application.Application;

import javafx.collections.ObservableList;

import javafx.scene.Scene;

import javafx.scene.layout.Pane;

import javafx.scene.paint.Color;

import javafx.scene.shape.Polygon;

import javafx.stage.Stage;



public class Lab10pt2 extends Application {

	@Override // Override the start method in the Application class

	public void start(Stage primaryStage) {

		// Create a pane, a polygon, and place polygon to pane

		final double WIDTH = 200, HEIGHT = 200;

		

		

		Pane pane = new Pane();

		

		//First way of creating a polygon

		//Polygon polygon = new Polygon(40,20,130,60,110,100,50,145,50,120);

		//(40,20) are the coordinates of the first point

		//(130,60) are the coordinates of the second point

		//and so on

		

		

		//Second way of creating a polygon

		Polygon polygon = new Polygon();

		ObservableList<Double> list = polygon.getPoints();

		

		list.add(40.0); //x coordinate of the first point

		list.add(20.0); //y coordinate of the first point

		list.add(130.0);

		list.add(60.0);

		list.add(110.0);

		list.add(100.0);

		list.add(50.0);

		list.add(145.0);

		list.add(20.0);

		list.add(60.0);

		

		polygon.setFill(Color.WHITE);

		polygon.setStroke(Color.BLACK);

		pane.getChildren().add(polygon);

		

		

		// Create a scene and place it in the stage

		Scene scene = new Scene(pane, WIDTH, HEIGHT);

		primaryStage.setTitle("ShowPolygon"); // Set the stage title

		primaryStage.setScene(scene); // Place the scene in the stage

		primaryStage.show(); // Display the stage

	}

	

	public static void main(String[] args) {

  	Application.launch(args);

  }

}
