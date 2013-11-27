/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIViewController.h>

@protocol SiriUIObjectPickerViewControllerDelegate;
@class , SAUIDomainObjectPicker, SiriUIObjectPickerButtonView;

@interface SiriUIObjectPickerViewController : UIViewController {

	BOOL _showsTopKeyline;
	<SiriUIObjectPickerViewControllerDelegate>* _pickerDelegate;
	SAUIDomainObjectPicker* _picker;

}

@property (assign,nonatomic,__weak) <SiriUIObjectPickerViewControllerDelegate> * pickerDelegate;              //@synthesize pickerDelegate=_pickerDelegate - In the implementation block
@property (assign,nonatomic) BOOL showsTopKeyline;                                                            //@synthesize showsTopKeyline=_showsTopKeyline - In the implementation block
@property (getter=_picker,nonatomic,readonly) SAUIDomainObjectPicker * picker;                                //@synthesize picker=_picker - In the implementation block
@property (nonatomic,readonly) SiriUIObjectPickerButtonView * view; 
+(float)defaultHeight;
+(id)pickerControllerWithPicker:(id)arg1 ;
-(void)loadView;
-(id)pickerDelegate;
-(void)setPickerDelegate:(id)arg1 ;
-(void)setShowsTopKeyline:(BOOL)arg1 ;
-(id)_picker;
-(BOOL)showsTopKeyline;
-(id)initWithPicker:(id)arg1 ;
-(void)_pickerButtonTapped:(id)arg1 ;
-(void).cxx_destruct;
@end
