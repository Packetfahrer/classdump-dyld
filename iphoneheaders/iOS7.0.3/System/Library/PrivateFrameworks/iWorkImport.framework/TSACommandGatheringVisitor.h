/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/TSKModelVisitor.h>

@class TSKCommandGroup, TSPObjectContext;

@interface TSACommandGatheringVisitor : NSObject <TSKModelVisitor> {

	TSKCommandGroup* mAccumulatedCommand;
	TSPObjectContext* _context;

}

@property (retain) TSKCommandGroup * accumulatedCommand; 
@property (nonatomic,retain) TSPObjectContext * context;              //@synthesize context=_context - In the implementation block
-(void)addCommand:(id)arg1 ;
-(id)accumulatedCommand;
-(void)setAccumulatedCommand:(id)arg1 ;
-(void)visitTSCHChartDrawableInfo:(id)arg1 ;
-(void)visitTSDConnectionLineInfo:(id)arg1 ;
-(void)visitTSDGroupInfo:(id)arg1 ;
-(void)visitTSDImageInfo:(id)arg1 ;
-(void)visitTSDMovieInfo:(id)arg1 ;
-(void)visitTSDShapeInfo:(id)arg1 ;
-(void)visitTSTTableInfo:(id)arg1 ;
-(void)visitTSWPShapeInfo:(id)arg1 ;
-(void)visitTSWPStorage:(id)arg1 ;
-(void)visitTSWPTOCInfo:(id)arg1 ;
-(void)visitModelEnumerator:(id)arg1 ;
-(void)protected_propagateTextStyleChangesToStorage:(id)arg1 replacementStrategy:(id)arg2 stripCharacterStyles:(BOOL)arg3 ;
-(void)dealloc;
-(id)context;
-(void)setContext:(id)arg1 ;
@end
