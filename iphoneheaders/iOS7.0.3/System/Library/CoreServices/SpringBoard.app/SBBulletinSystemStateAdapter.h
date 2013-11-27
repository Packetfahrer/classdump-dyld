/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:42:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoard/SBApplicationRestrictionObserver.h>

@class BBSystemStateProvider;

@interface SBBulletinSystemStateAdapter : NSObject <SBApplicationRestrictionObserver> {

	BBSystemStateProvider* _stateProvider;
	BOOL _quietModeEnabled;

}
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
-(void)applicationRestrictionController:(id)arg1 didUpdateVisibleTags:(id)arg2 hiddenTags:(id)arg3 ;
-(void)_lockStateChanged:(id)arg1 ;
-(void)_screenDimmed:(id)arg1 ;
-(void)_lostModeStateChanged;
-(void)dealloc;
-(id)init;
@end
