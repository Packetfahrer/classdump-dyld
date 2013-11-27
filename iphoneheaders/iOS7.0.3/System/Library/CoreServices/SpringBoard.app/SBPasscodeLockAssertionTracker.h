/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:41:55 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <SpringBoard/SpringBoard-Structs.h>
@class NSMutableSet;

@interface SBPasscodeLockAssertionTracker : NSObject {

	MKBAssertionRef _mkbAssertion;
	NSMutableSet* _assertions;

}
-(id)mkbAssertionOptions;
-(void)removeAssertion:(id)arg1 ;
-(BOOL)hasActiveAssertions;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)addAssertion:(id)arg1 ;
@end
