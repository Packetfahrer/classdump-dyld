/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:04 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/FaceTime.app/FaceTime
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <FaceTime/PHRecentCall.h>

@class NSMutableArray;

@interface PHRecentMultiCall : PHRecentCall {

	NSMutableArray* _callOccurrences;
	NSMutableArray* _underlyingCTCalls;

}
+(id)callByCoalescing:(id)arg1 withPreviousCall:(id)arg2 ;
-(id)underlyingCTCalls;
-(id)callOccurrences;
-(BOOL)representsCallAtDate:(id)arg1 ;
-(void)deleteUnderlyingCTCall;
-(int)numberOfOccurrences;
-(void)addOccurrence:(id)arg1 type:(int)arg2 category:(int)arg3 duration:(double)arg4 bytesOfDataUsed:(double)arg5 ;
-(void)addUnderlyingCTCalls:(id)arg1 ;
-(void)addOccurrencesFromArray:(id)arg1 ;
-(id)occurrenceAtIndex:(int)arg1 ;
-(id)_callOccurrencesTestDataComplex;
-(id)_callOccurrencesTestDataIncomingOnly;
-(id)_callOccurrencesTestDataIncomingAndOutgoing;
-(id)_callOccurrencesTestDataLongSingle;
-(void)dealloc;
@end
