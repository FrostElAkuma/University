package application;
	
import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.layout.Pane;
import javafx.scene.paint.Color;
import javafx.stage.Stage;
import javafx.scene.text.Font;
import javafx.scene.text.Text;
import javafx.scene.text.FontPosture;
import javafx.scene.text.FontWeight;


public class Texts extends Application {
	@Override
	public void start(Stage primaryStage) {
		
		/// Create a pane to hold the texts
		Pane pane = new Pane();

		//(100, 80) are the x,y coordinates for the text

		Text text1 = new Text(100, 200, "JavaFX");
		Text text2 = new Text(200, 200, "JavaFX");
		Text text3 = new Text(300, 200, "JavaFX");
		Text text4 = new Text(400, 200, "JavaFX");
		Text text5 = new Text(500, 200, "JavaFX");

		//text1.setFill(Color.BLUE);
		//Color myColor = new Color(Math.random(), Math.random(), Math.random(), Math.random());

		text1.setFill(new Color(Math.random(), Math.random(), Math.random(), Math.random()));
		text2.setFill(new Color(Math.random(), Math.random(), Math.random(), Math.random()));
		text3.setFill(new Color(Math.random(), Math.random(), Math.random(), Math.random()));
		text4.setFill(new Color(Math.random(), Math.random(), Math.random(), Math.random()));
		text5.setFill(new Color(Math.random(), Math.random(), Math.random(), Math.random()));

		text1.setFont(Font.font("Times New Roman", FontWeight.BOLD, FontPosture.ITALIC, 27));
		text2.setFont(Font.font("Times New Roman", FontWeight.BOLD, FontPosture.ITALIC, 27));
		text3.setFont(Font.font("Times New Roman", FontWeight.BOLD, FontPosture.ITALIC, 27));
		text4.setFont(Font.font("Times New Roman", FontWeight.BOLD, FontPosture.ITALIC, 27));
		text5.setFont(Font.font("Times New Roman", FontWeight.BOLD, FontPosture.ITALIC, 27));

		//text1.setFont(Font.font(40));
		//text1.setFont(Font.font("Times New Roman"));

		text1.setRotate(90);
		text2.setRotate(90);
		text3.setRotate(90);
		text4.setRotate(90);
		text5.setRotate(90);

		pane.getChildren().addAll(text1, text2, text3, text4, text5);

		// Create a scene and place it in the stage
		Scene scene = new Scene(pane, 600, 400);//width=600, height=200
		primaryStage.setTitle("Lab 10 JavaFX"); // Set the stage title
		primaryStage.setScene(scene); // Place the scene in the stage
		primaryStage.show(); // Display the stage
	} // This is too repetitive is there a better way to do this ? Thanks as always 

	public static void main(String[] args) {

  	Application.launch(args);

  }

}