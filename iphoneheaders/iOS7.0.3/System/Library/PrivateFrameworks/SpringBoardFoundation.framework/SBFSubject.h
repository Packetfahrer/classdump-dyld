/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoardFoundation/SBFObservable.h>
#import <SpringBoardFoundation/SBFObserver.h>

@class NSMutableArray;

@interface SBFSubject : SBFObservable <SBFObserver> {

	NSMutableArray* _observers;

}
-(void)dealloc;
-(id)init;
-(void)observerDidReceiveResult:(id)arg1 ;
-(void)observerDidComplete;
-(void)observerDidFailWithError:(id)arg1 ;
-(id)_observers;
-(id)subscribe:(id)arg1 ;
@end
