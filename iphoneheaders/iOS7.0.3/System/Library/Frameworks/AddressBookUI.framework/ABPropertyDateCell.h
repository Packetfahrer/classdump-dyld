/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <AddressBookUI/ABPropertySimpleCell.h>
#import <UIKit/UITextFieldDelegate.h>

@class UIDatePicker, UIViewController;

@interface ABPropertyDateCell : ABPropertySimpleCell <UITextFieldDelegate> {

	UIDatePicker* _datePicker;
	UIViewController* _contentViewController;

}

@property (nonatomic,retain) UIDatePicker * datePicker;                             //@synthesize datePicker=_datePicker - In the implementation block
@property (nonatomic,retain) UIViewController * contentViewController;              //@synthesize contentViewController=_contentViewController - In the implementation block
-(id)datePicker;
-(void)setDatePicker:(id)arg1 ;
-(void)localeUpdated:(id)arg1 ;
-(BOOL)_shouldUseYearlessPickerForDateComponents:(id)arg1 ;
-(void)dateChanged:(id)arg1 ;
-(void)dealloc;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
-(id)contentViewController;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)setContentViewController:(id)arg1 ;
@end
