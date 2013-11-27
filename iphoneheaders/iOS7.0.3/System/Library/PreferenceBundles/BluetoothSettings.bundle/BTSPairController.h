/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:54 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/BluetoothSettings.bundle/BluetoothSettings
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <BluetoothSettings/BluetoothSettings-Structs.h>
#import <Preferences/PSListController.h>
#import <UIKit/UITextFieldDelegate.h>

@class BluetoothDevice, NSString;

@interface BTSPairController : PSListController <UITextFieldDelegate> {

	BluetoothDevice* _device;
	NSString* _promptFormat;
	BOOL _dismissed;

}
-(void)dealloc;
-(id)init;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)textDidChange:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)deviceUpdated:(id)arg1 ;
-(void)updatePrompt:(id)arg1 ;
-(void)emptySetter:(id)arg1 specifier:(id)arg2 ;
-(void)doneButtonClicked:(id)arg1 ;
-(void)cancelButtonClicked:(id)arg1 ;
-(id)specifiers;
-(void)keyboardWillShow:(id)arg1 ;
@end
