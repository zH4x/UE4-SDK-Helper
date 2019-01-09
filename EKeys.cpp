
#include "EKeys.h"

namespace SDK
{
	EKeys::EKeys() :
		AnyKey("AnyKey"),
		MouseX("MouseX"),
		MouseY("MouseY"),
		MouseScrollUp("MouseScrollUp"),
		MouseScrollDown("MouseScrollDown"),
		MouseWheelAxis("MouseWheelAxis"),

		LeftMouseButton("LeftMouseButton"),
		RightMouseButton("RightMouseButton"),
		MiddleMouseButton("MiddleMouseButton"),
		ThumbMouseButton("ThumbMouseButton"),
		ThumbMouseButton2("ThumbMouseButton2"),

		BackSpace("BackSpace"),
		Tab("Tab"),
		Enter("Enter"),
		Pause("Pause"),

		CapsLock("CapsLock"),
		Escape("Escape"),
		SpaceBar("SpaceBar"),
		PageUp("PageUp"),
		PageDown("PageDown"),
		End("End"),
		Home("Home"),

		Left("Left"),
		Up("Up"),
		Right("Right"),
		Down("Down"),

		Insert("Insert"),
		Delete("Delete"),

		Zero("Zero"),
		One("One"),
		Two("Two"),
		Three("Three"),
		Four("Four"),
		Five("Five"),
		Six("Six"),
		Seven("Seven"),
		Eight("Eight"),
		Nine("Nine"),

		A("A"),
		B("B"),
		C("C"),
		D("D"),
		E("E"),
		F("F"),
		G("G"),
		H("H"),
		I("I"),
		J("J"),
		K("K"),
		L("L"),
		M("M"),
		N("N"),
		O("O"),
		P("P"),
		Q("Q"),
		R("R"),
		S("S"),
		T("T"),
		U("U"),
		V("V"),
		W("W"),
		X("X"),
		Y("Y"),
		Z("Z"),

		NumPadZero("NumPadZero"),
		NumPadOne("NumPadOne"),
		NumPadTwo("NumPadTwo"),
		NumPadThree("NumPadThree"),
		NumPadFour("NumPadFour"),
		NumPadFive("NumPadFive"),
		NumPadSix("NumPadSix"),
		NumPadSeven("NumPadSeven"),
		NumPadEight("NumPadEight"),
		NumPadNine("NumPadNine"),

		Multiply("Multiply"),
		Add("Add"),
		Subtract("Subtract"),
		Decimal("Decimal"),
		Divide("Divide"),

		F1("F1"),
		F2("F2"),
		F3("F3"),
		F4("F4"),
		F5("F5"),
		F6("F6"),
		F7("F7"),
		F8("F8"),
		F9("F9"),
		F10("F10"),
		F11("F11"),
		F12("F12"),

		NumLock("NumLock"),

		ScrollLock("ScrollLock"),

		LeftShift("LeftShift"),
		RightShift("RightShift"),
		LeftControl("LeftControl"),
		RightControl("RightControl"),
		LeftAlt("LeftAlt"),
		RightAlt("RightAlt"),
		LeftCommand("LeftCommand"),
		RightCommand("RightCommand"),

		Semicolon("Semicolon"),
		Equals("Equals"),
		Comma("Comma"),
		Underscore("Underscore"),
		Hyphen("Hyphen"),
		Period("Period"),
		Slash("Slash"),
		Tilde("Tilde"),
		LeftBracket("LeftBracket"),
		LeftParantheses("LeftParantheses"),
		Backslash("Backslash"),
		RightBracket("RightBracket"),
		RightParantheses("RightParantheses"),
		Apostrophe("Apostrophe"),
		Quote("Quote"),

		Asterix("Asterix"),
		Ampersand("Ampersand"),
		Caret("Caret"),
		Dollar("Dollar"),
		Exclamation("Exclamation"),
		Colon("Colon"),

		A_AccentGrave("A_AccentGrave"),
		E_AccentGrave("E_AccentGrave"),
		E_AccentAigu("E_AccentAigu"),
		C_Cedille("C_Cedille"),
		Section("Section"),

		// Ensure that the Gamepad_ names match those in GenericApplication.cpp
		Gamepad_LeftX("Gamepad_LeftX"),
		Gamepad_LeftY("Gamepad_LeftY"),
		Gamepad_RightX("Gamepad_RightX"),
		Gamepad_RightY("Gamepad_RightY"),
		Gamepad_LeftTriggerAxis("Gamepad_LeftTriggerAxis"),
		Gamepad_RightTriggerAxis("Gamepad_RightTriggerAxis"),

		Gamepad_LeftThumbstick("Gamepad_LeftThumbstick"),
		Gamepad_RightThumbstick("Gamepad_RightThumbstick"),
		Gamepad_Special_Left("Gamepad_Special_Left"),
		Gamepad_Special_Right("Gamepad_Special_Right"),
		Gamepad_FaceButton_Bottom("Gamepad_FaceButton_Bottom"),
		Gamepad_FaceButton_Right("Gamepad_FaceButton_Right"),
		Gamepad_FaceButton_Left("Gamepad_FaceButton_Left"),
		Gamepad_FaceButton_Top("Gamepad_FaceButton_Top"),
		Gamepad_LeftShoulder("Gamepad_LeftShoulder"),
		Gamepad_RightShoulder("Gamepad_RightShoulder"),
		Gamepad_LeftTrigger("Gamepad_LeftTrigger"),
		Gamepad_RightTrigger("Gamepad_RightTrigger"),
		Gamepad_DPad_Up("Gamepad_DPad_Up"),
		Gamepad_DPad_Down("Gamepad_DPad_Down"),
		Gamepad_DPad_Right("Gamepad_DPad_Right"),
		Gamepad_DPad_Left("Gamepad_DPad_Left"),

		// Virtual key codes used for input axis button press/release emulation
		Gamepad_LeftStick_Up("Gamepad_LeftStick_Up"),
		Gamepad_LeftStick_Down("Gamepad_LeftStick_Down"),
		Gamepad_LeftStick_Right("Gamepad_LeftStick_Right"),
		Gamepad_LeftStick_Left("Gamepad_LeftStick_Left"),

		Gamepad_RightStick_Up("Gamepad_RightStick_Up"),
		Gamepad_RightStick_Down("Gamepad_RightStick_Down"),
		Gamepad_RightStick_Right("Gamepad_RightStick_Right"),
		Gamepad_RightStick_Left("Gamepad_RightStick_Left"),

		// Vector axes (FVector("Vector axes (FVector"), not float)
		Tilt("Tilt"),
		RotationRate("RotationRate"),
		Gravity("Gravity"),
		Acceleration("Acceleration"),

		// Gestures
		Gesture_Pinch("Gesture_Pinch"),
		Gesture_Flick("Gesture_Flick"),

		// Motion Controllers
		//		Left Controller
		MotionController_Left_FaceButton1("MotionController_Left_FaceButton1"),
		MotionController_Left_FaceButton2("MotionController_Left_FaceButton2"),
		MotionController_Left_FaceButton3("MotionController_Left_FaceButton3"),
		MotionController_Left_FaceButton4("MotionController_Left_FaceButton4"),
		MotionController_Left_FaceButton5("MotionController_Left_FaceButton5"),
		MotionController_Left_FaceButton6("MotionController_Left_FaceButton6"),
		MotionController_Left_FaceButton7("MotionController_Left_FaceButton7"),
		MotionController_Left_FaceButton8("MotionController_Left_FaceButton8"),

		MotionController_Left_Shoulder("MotionController_Left_Shoulder"),
		MotionController_Left_Trigger("MotionController_Left_Trigger"),

		MotionController_Left_Grip1("MotionController_Left_Grip1"),
		MotionController_Left_Grip2("MotionController_Left_Grip2"),

		MotionController_Left_Thumbstick("MotionController_Left_Thumbstick"),
		MotionController_Left_Thumbstick_Up("MotionController_Left_Thumbstick_Up"),
		MotionController_Left_Thumbstick_Down("MotionController_Left_Thumbstick_Down"),
		MotionController_Left_Thumbstick_Left("MotionController_Left_Thumbstick_Left"),
		MotionController_Left_Thumbstick_Right("MotionController_Left_Thumbstick_Right"),

		//		Right Controller
		MotionController_Right_FaceButton1("MotionController_Right_FaceButton1"),
		MotionController_Right_FaceButton2("MotionController_Right_FaceButton2"),
		MotionController_Right_FaceButton3("MotionController_Right_FaceButton3"),
		MotionController_Right_FaceButton4("MotionController_Right_FaceButton4"),
		MotionController_Right_FaceButton5("MotionController_Right_FaceButton5"),
		MotionController_Right_FaceButton6("MotionController_Right_FaceButton6"),
		MotionController_Right_FaceButton7("MotionController_Right_FaceButton7"),
		MotionController_Right_FaceButton8("MotionController_Right_FaceButton8"),

		MotionController_Right_Shoulder("MotionController_Right_Shoulder"),
		MotionController_Right_Trigger("MotionController_Right_Trigger"),

		MotionController_Right_Grip1("MotionController_Right_Grip1"),
		MotionController_Right_Grip2("MotionController_Right_Grip2"),

		MotionController_Right_Thumbstick("MotionController_Right_Thumbstick"),
		MotionController_Right_Thumbstick_Up("MotionController_Right_Thumbstick_Up"),
		MotionController_Right_Thumbstick_Down("MotionController_Right_Thumbstick_Down"),
		MotionController_Right_Thumbstick_Left("MotionController_Right_Thumbstick_Left"),
		MotionController_Right_Thumbstick_Right("MotionController_Right_Thumbstick_Right"),

		//   Motion Controller Axes
		//		Left Controller
		MotionController_Left_Thumbstick_X("MotionController_Left_Thumbstick_X"),
		MotionController_Left_Thumbstick_Y("MotionController_Left_Thumbstick_Y"),
		MotionController_Left_TriggerAxis("MotionController_Left_TriggerAxis"),
		MotionController_Left_Grip1Axis( "MotionController_Left_Grip1Axis" ),
		MotionController_Left_Grip2Axis( "MotionController_Left_Grip2Axis" ),

		//		Right Controller
		MotionController_Right_Thumbstick_X("MotionController_Right_Thumbstick_X"),
		MotionController_Right_Thumbstick_Y("MotionController_Right_Thumbstick_Y"),
		MotionController_Right_TriggerAxis("MotionController_Right_TriggerAxis"),
		MotionController_Right_Grip1Axis( "MotionController_Right_Grip1Axis" ),
		MotionController_Right_Grip2Axis( "MotionController_Right_Grip2Axis" ),

		// PS4-specific
		PS4_Special("PS4_Special"),

		// Steam Controller Specific
		Steam_Touch_0("Steam_Touch_0"),
		Steam_Touch_1("Steam_Touch_1"),
		Steam_Touch_2("Steam_Touch_2"),
		Steam_Touch_3("Steam_Touch_3"),
		Steam_Back_Left("Steam_Back_Left"),
		Steam_Back_Right("Steam_Back_Right"),

		// Xbox One global speech commands
		Global_Menu("Global_Menu"),
		Global_View("Global_View"),
		Global_Pause("Global_Pause"),
		Global_Play("Global_Play"),
		Global_Back("Global_Back"),

		// Android-specific
		Android_Back("Android_Back"),
		Android_Volume_Up("Android_Volume_Up"),
		Android_Volume_Down("Android_Volume_Down"),
		Android_Menu("Android_Menu")
	{		
	}
}