/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <TelephonyUI/TPPhonePad.h>

@class SBEmergencyCallButton, UIImage, UIPushButton;

@interface SBDeviceLockKeypad : TPPhonePad {
	UIImage* _deleteIcon;
	UIPushButton* _deleteButton;
	SBEmergencyCallButton* _emergencyCallButton;
	BOOL _showDeleteIcon;
	BOOL _playKeyboardClicks;
}
// inherited: -(id)initWithFrame:(CGRect)frame;
-(void)setPlaysKeyboardClicks:(BOOL)clicks;
-(BOOL)showsEmergencyCallButton;
-(void)setShowsEmergencyCallButton:(BOOL)button;
// inherited: -(void)dealloc;
-(void)setShowsDeleteIcon:(BOOL)icon;
// inherited: -(id)_pressedImage;
-(void)hiddenFromView;
-(void)willBecomeVisible;
// inherited: -(id)_keypadImage;
// inherited: -(float)_yFudge;
@end
