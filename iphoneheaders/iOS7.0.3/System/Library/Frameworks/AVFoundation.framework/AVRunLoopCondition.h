/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:33 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Foundation/NSCondition.h>

@class NSMutableArray;

@interface AVRunLoopCondition : NSCondition {

	NSMutableArray* _runLoopStateList;

}
-(void)waitInMode:(id)arg1 ;
-(BOOL)waitUntilDate:(id)arg1 inMode:(id)arg2 ;
-(BOOL)_waitInMode:(id)arg1 untilDate:(id)arg2 ;
-(void)_signalRunLoopWithState:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)signal;
-(BOOL)waitUntilDate:(id)arg1 ;
-(void)wait;
-(void)broadcast;
@end
