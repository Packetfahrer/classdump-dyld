/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:42:14 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class BKSProcessAssertion, NSString;

@interface SBBackgroundFetchTask : NSObject {

	BKSProcessAssertion* _assertion;
	/*^block*/ id _completionHandler;
	NSString* _bundleID;
	unsigned _trigger;
	int _sequenceNumber;

}

@property (nonatomic,retain) BKSProcessAssertion * assertion;              //@synthesize assertion=_assertion - In the implementation block
@property (nonatomic,copy) id completionHandler;                           //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) NSString * bundleID;                        //@synthesize bundleID=_bundleID - In the implementation block
@property (readonly) unsigned trigger;                                     //@synthesize trigger=_trigger - In the implementation block
@property (readonly) int sequenceNumber;                                   //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
-(void)finishWithResult:(unsigned)arg1 ;
-(void)setAssertion:(id)arg1 ;
-(void)_fireCompletionHandlerWithResult:(unsigned)arg1 ;
-(id)initForApplication:(id)arg1 trigger:(unsigned)arg2 sequenceNumber:(int)arg3 withCompletion:(/*^block*/ id)arg4 ;
-(unsigned)trigger;
-(int)sequenceNumber;
-(id)bundleID;
-(void)dealloc;
-(id)description;
-(/*^block*/ id)completionHandler;
-(void)setCompletionHandler:(/*^block*/ id)arg1 ;
-(id)assertion;
@end
