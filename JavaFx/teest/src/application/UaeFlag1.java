package application;

import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.layout.Pane;
import javafx.scene.paint.Color;
import javafx.scene.shape.Rectangle;
import javafx.stage.Stage;
import javafx.scene.text.Text;

public class UaeFlag1 extends Application {

	public void start(Stage primaryStage) {

		Pane pane = new Pane();

		// Create rectangle r1 and add to pane
		
		//(45,40) are (x,y) of the top left corner of the rectangle

		//width=100, height=60
		Rectangle r1 = new Rectangle(0, 0, 80, 198);
		Rectangle r2 = new Rectangle(80, 0, 400, 66);
		Rectangle r3 = new Rectangle(80, 66, 400, 66);
		Rectangle r4 = new Rectangle(80, 132, 400, 66);

		//Color myColor = new Color(0.8, 0.14, 0.333, 1);

		r1.setFill(Color.RED);//set the fill color
		r2.setFill(Color.GREEN);//set the fill color
		r3.setFill(Color.WHITE);//set the fill color
		r4.setFill(Color.BLACK);//set the fill color
		//r1.setStroke(Color.RED); //set the color of the line
		//r1.setStrokeWidth(5); //set the width of the line
		//r1.setRotate(-45);	

		pane.getChildren().addAll(r1,r2,r3,r4);

		// Create a scene and place it in the stage
		Scene scene = new Scene(pane, 400, 198);
		primaryStage.setTitle("ShowRectangle"); // Set the stage title
		primaryStage.setScene(scene); // Place the scene in the stage
		primaryStage.show(); // Display the stage
	}

	public static void main(String[] args) {

  	Application.launch(args);

  }

}
