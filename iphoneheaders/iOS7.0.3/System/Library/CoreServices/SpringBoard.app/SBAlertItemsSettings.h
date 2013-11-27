/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:42:14 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/_UISettings.h>

@interface SBAlertItemsSettings : _UISettings {

	BOOL _disableBBHandlers;
	int _testItemToken;

}

@property (assign,nonatomic) BOOL disableBBHandlers;              //@synthesize disableBBHandlers=_disableBBHandlers - In the implementation block
@property (assign,nonatomic) int testItemToken;                   //@synthesize testItemToken=_testItemToken - In the implementation block
+(id)newTestItemForToken:(int)arg1 ;
+(id)settingsControllerModule;
-(void)setTestItemToken:(int)arg1 ;
-(int)testItemToken;
-(BOOL)disableBBHandlers;
-(void)setDisableBBHandlers:(BOOL)arg1 ;
-(void)setDefaultValues;
@end
