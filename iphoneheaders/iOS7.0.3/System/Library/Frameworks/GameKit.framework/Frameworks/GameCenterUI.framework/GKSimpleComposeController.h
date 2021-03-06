/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:36 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GKBaseComposeController.h>

@class GKComposeHeaderWithStaticRecipients, NSString, NSArray;

@interface GKSimpleComposeController : GKBaseComposeController {

	GKComposeHeaderWithStaticRecipients* _toField;
	NSString* _defaultMessage;
	NSArray* _players;
	/*^block*/ id _doneHandler;

}

@property (nonatomic,retain) GKComposeHeaderWithStaticRecipients * toField;              //@synthesize toField=_toField - In the implementation block
@property (nonatomic,retain) NSString * defaultMessage;                                  //@synthesize defaultMessage=_defaultMessage - In the implementation block
@property (nonatomic,retain) NSArray * players;                                          //@synthesize players=_players - In the implementation block
@property (nonatomic,copy) id doneHandler;                                               //@synthesize doneHandler=_doneHandler - In the implementation block
-(id)players;
-(void)setPlayers:(id)arg1 ;
-(void)setDefaultMessage:(id)arg1 ;
-(void)pushOntoNavigationController:(id)arg1 withDoneHandler:(/*^block*/ id)arg2 ;
-(id)defaultMessage;
-(void)setupSendButton;
-(void)donePressed;
-(void)setDoneHandler:(/*^block*/ id)arg1 ;
-(/*^block*/ id)doneHandler;
-(id)toField;
-(void)setToField:(id)arg1 ;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
@end

