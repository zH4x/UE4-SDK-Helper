#pragma once

#include "SDK.hpp"

namespace SDK
{
	class EKeys
	{
	private:
		EKeys();
	public:
		EKeys(EKeys const&) = delete;
        void operator=(EKeys const&) = delete;

		static EKeys & GetInstance()
        {
            static EKeys instance;                                  
            return instance;
        }

		const FKey AnyKey;

		const FKey MouseX;
		const FKey MouseY;
		const FKey MouseScrollUp;
		const FKey MouseScrollDown;
		const FKey MouseWheelAxis;

		const FKey LeftMouseButton;
		const FKey RightMouseButton;
		const FKey MiddleMouseButton;
		const FKey ThumbMouseButton;
		const FKey ThumbMouseButton2;

		const FKey BackSpace;
		const FKey Tab;
		const FKey Enter;
		const FKey Pause;

		const FKey CapsLock;
		const FKey Escape;
		const FKey SpaceBar;
		const FKey PageUp;
		const FKey PageDown;
		const FKey End;
		const FKey Home;

		const FKey Left;
		const FKey Up;
		const FKey Right;
		const FKey Down;

		const FKey Insert;
		const FKey Delete;

		const FKey Zero;
		const FKey One;
		const FKey Two;
		const FKey Three;
		const FKey Four;
		const FKey Five;
		const FKey Six;
		const FKey Seven;
		const FKey Eight;
		const FKey Nine;

		const FKey A;
		const FKey B;
		const FKey C;
		const FKey D;
		const FKey E;
		const FKey F;
		const FKey G;
		const FKey H;
		const FKey I;
		const FKey J;
		const FKey K;
		const FKey L;
		const FKey M;
		const FKey N;
		const FKey O;
		const FKey P;
		const FKey Q;
		const FKey R;
		const FKey S;
		const FKey T;
		const FKey U;
		const FKey V;
		const FKey W;
		const FKey X;
		const FKey Y;
		const FKey Z;

		const FKey NumPadZero;
		const FKey NumPadOne;
		const FKey NumPadTwo;
		const FKey NumPadThree;
		const FKey NumPadFour;
		const FKey NumPadFive;
		const FKey NumPadSix;
		const FKey NumPadSeven;
		const FKey NumPadEight;
		const FKey NumPadNine;

		const FKey Multiply;
		const FKey Add;
		const FKey Subtract;
		const FKey Decimal;
		const FKey Divide;

		const FKey F1;
		const FKey F2;
		const FKey F3;
		const FKey F4;
		const FKey F5;
		const FKey F6;
		const FKey F7;
		const FKey F8;
		const FKey F9;
		const FKey F10;
		const FKey F11;
		const FKey F12;

		const FKey NumLock;

		const FKey ScrollLock;

		const FKey LeftShift;
		const FKey RightShift;
		const FKey LeftControl;
		const FKey RightControl;
		const FKey LeftAlt;
		const FKey RightAlt;
		const FKey LeftCommand;
		const FKey RightCommand;

		const FKey Semicolon;
		const FKey Equals;
		const FKey Comma;
		const FKey Underscore;
		const FKey Hyphen;
		const FKey Period;
		const FKey Slash;
		const FKey Tilde;
		const FKey LeftBracket;
		const FKey Backslash;
		const FKey RightBracket;
		const FKey Apostrophe;

		const FKey Ampersand;
		const FKey Asterix;
		const FKey Caret;
		const FKey Colon;
		const FKey Dollar;
		const FKey Exclamation;
		const FKey LeftParantheses;
		const FKey RightParantheses;
		const FKey Quote;

		const FKey A_AccentGrave;
		const FKey E_AccentGrave;
		const FKey E_AccentAigu;
		const FKey C_Cedille;
		const FKey Section;

		// Platform Keys
		// These keys platform specific versions of keys that go by different names.
		// The delete key is a good example, on Windows Delete is the virtual key for Delete.
		// On Macs, the Delete key is the virtual key for BackSpace.
		const FKey Platform_Delete;

		// Gamepad Keys
		const FKey Gamepad_LeftX;
		const FKey Gamepad_LeftY;
		const FKey Gamepad_RightX;
		const FKey Gamepad_RightY;
		const FKey Gamepad_LeftTriggerAxis;
		const FKey Gamepad_RightTriggerAxis;

		const FKey Gamepad_LeftThumbstick;
		const FKey Gamepad_RightThumbstick;
		const FKey Gamepad_Special_Left;
		const FKey Gamepad_Special_Right;
		const FKey Gamepad_FaceButton_Bottom;
		const FKey Gamepad_FaceButton_Right;
		const FKey Gamepad_FaceButton_Left;
		const FKey Gamepad_FaceButton_Top;
		const FKey Gamepad_LeftShoulder;
		const FKey Gamepad_RightShoulder;
		const FKey Gamepad_LeftTrigger;
		const FKey Gamepad_RightTrigger;
		const FKey Gamepad_DPad_Up;
		const FKey Gamepad_DPad_Down;
		const FKey Gamepad_DPad_Right;
		const FKey Gamepad_DPad_Left;

		// Virtual key codes used for input axis button press/release emulation
		const FKey Gamepad_LeftStick_Up;
		const FKey Gamepad_LeftStick_Down;
		const FKey Gamepad_LeftStick_Right;
		const FKey Gamepad_LeftStick_Left;

		const FKey Gamepad_RightStick_Up;
		const FKey Gamepad_RightStick_Down;
		const FKey Gamepad_RightStick_Right;
		const FKey Gamepad_RightStick_Left;

		// const FKey Vector axes (FVector; not float)
		const FKey Tilt;
		const FKey RotationRate;
		const FKey Gravity;
		const FKey Acceleration;

		// Gestures
		const FKey Gesture_Pinch;
		const FKey Gesture_Flick;

		// Motion Controllers
		//		Left Controller
		const FKey MotionController_Left_FaceButton1;
		const FKey MotionController_Left_FaceButton2;
		const FKey MotionController_Left_FaceButton3;
		const FKey MotionController_Left_FaceButton4;
		const FKey MotionController_Left_FaceButton5;
		const FKey MotionController_Left_FaceButton6;
		const FKey MotionController_Left_FaceButton7;
		const FKey MotionController_Left_FaceButton8;

		const FKey MotionController_Left_Shoulder;
		const FKey MotionController_Left_Trigger;

		const FKey MotionController_Left_Grip1;
		const FKey MotionController_Left_Grip2;

		const FKey MotionController_Left_Thumbstick;
		const FKey MotionController_Left_Thumbstick_Up;
		const FKey MotionController_Left_Thumbstick_Down;
		const FKey MotionController_Left_Thumbstick_Left;
		const FKey MotionController_Left_Thumbstick_Right;

		//		Right Controller
		const FKey MotionController_Right_FaceButton1;
		const FKey MotionController_Right_FaceButton2;
		const FKey MotionController_Right_FaceButton3;
		const FKey MotionController_Right_FaceButton4;
		const FKey MotionController_Right_FaceButton5;
		const FKey MotionController_Right_FaceButton6;
		const FKey MotionController_Right_FaceButton7;
		const FKey MotionController_Right_FaceButton8;

		const FKey MotionController_Right_Shoulder;
		const FKey MotionController_Right_Trigger;

		const FKey MotionController_Right_Grip1;
		const FKey MotionController_Right_Grip2;

		const FKey MotionController_Right_Thumbstick;
		const FKey MotionController_Right_Thumbstick_Up;
		const FKey MotionController_Right_Thumbstick_Down;
		const FKey MotionController_Right_Thumbstick_Left;
		const FKey MotionController_Right_Thumbstick_Right;
		 
		//   Motion Controller Axes
		//		Left Controller
		const FKey MotionController_Left_Thumbstick_X;
		const FKey MotionController_Left_Thumbstick_Y;
		const FKey MotionController_Left_TriggerAxis;
		const FKey MotionController_Left_Grip1Axis;
		const FKey MotionController_Left_Grip2Axis;

		//		Right Controller
		const FKey MotionController_Right_Thumbstick_X;
		const FKey MotionController_Right_Thumbstick_Y;
		const FKey MotionController_Right_TriggerAxis;
		const FKey MotionController_Right_Grip1Axis;
		const FKey MotionController_Right_Grip2Axis;

		// PS4-specific
		const FKey PS4_Special;

		// Steam Controller Specific
		const FKey Steam_Touch_0;
		const FKey Steam_Touch_1;
		const FKey Steam_Touch_2;
		const FKey Steam_Touch_3;
		const FKey Steam_Back_Left;
		const FKey Steam_Back_Right;

		// Xbox One global speech commands
		const FKey Global_Menu;
		const FKey Global_View;
		const FKey Global_Pause;
		const FKey Global_Play;
		const FKey Global_Back;

		// Android-specific
		const FKey Android_Back;
		const FKey Android_Volume_Up;
		const FKey Android_Volume_Down;
		const FKey Android_Menu;
	};
}
