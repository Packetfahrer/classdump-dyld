/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:44:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/distill
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSDictionary;

@interface ProgressParameterWrapper : NSObject {

	unsigned progressTotalCount;
	double progressIncrement;
	double progressTotal;
	unsigned progressUpdatePeriod;
	NSDictionary* progressInfo;

}
-(id)initForTotalCount:(unsigned)arg1 numberOfLoops:(unsigned)arg2 ;
-(void)notifyProgress;
-(void)notifyFinishProgress;
-(unsigned)progressUpdatePeriod;
-(void)dealloc;
@end
