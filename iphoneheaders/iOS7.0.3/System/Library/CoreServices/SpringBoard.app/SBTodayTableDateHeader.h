/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:42:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <SpringBoard/SpringBoard-Structs.h>
@class NSString;

@interface SBTodayTableDateHeader : NSObject {

	BOOL _shouldSuperscriptOrdinal;
	NSString* _dateString;
	NSRange _ordinalRange;

}

@property (readonly) NSString * dateString;                      //@synthesize dateString=_dateString - In the implementation block
@property (readonly) NSRange ordinalRange;                       //@synthesize ordinalRange=_ordinalRange - In the implementation block
@property (readonly) BOOL shouldSuperscriptOrdinal;              //@synthesize shouldSuperscriptOrdinal=_shouldSuperscriptOrdinal - In the implementation block
+(id)dateHeaderWithDate:(id)arg1 locale:(id)arg2 ;
-(BOOL)shouldSuperscriptOrdinal;
-(NSRange)ordinalRange;
-(id)initWithDateString:(id)arg1 ordinalRange:(NSRange)arg2 shouldSuperscriptOrdinal:(BOOL)arg3 ;
-(void)dealloc;
-(id)dateString;
@end
