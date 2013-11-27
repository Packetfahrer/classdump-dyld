/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:41 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIViewController.h>

@class UILabel, UIButton, NSString;

@interface MSErrorViewController : UIViewController {

	UILabel* _titleLabel;
	UILabel* _messageLabel;
	UIButton* _okButton;
	NSString* _errorTitle;
	NSString* _errorMessage;

}

@property (nonatomic,retain) NSString * errorTitle;                //@synthesize errorTitle=_errorTitle - In the implementation block
@property (nonatomic,retain) NSString * errorMessage;              //@synthesize errorMessage=_errorMessage - In the implementation block
-(void)setErrorTitle:(id)arg1 ;
-(void)setErrorMessage:(id)arg1 ;
-(id)errorTitle;
-(id)errorMessage;
-(void)dealloc;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)loadView;
-(void)okButtonTapped:(id)arg1 ;
-(void)updateTitleLabelText;
-(void)updateMessageLabelText;
-(void).cxx_destruct;
@end
