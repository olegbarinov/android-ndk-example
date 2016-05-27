package barinov.jniexample;

import android.app.Activity;
import android.os.Bundle;

public class MainActivity extends Activity {
	static {
		System.loadLibrary("mathjni");
	}

	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		final double x = 5.22;
		System.out.println(x + "! = " + factorial(x));
	}

	private native double factorial(double x);
}
