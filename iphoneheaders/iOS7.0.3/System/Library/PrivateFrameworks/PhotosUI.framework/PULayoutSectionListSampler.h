/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:36 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PULayoutSectionSampler.h>

@interface PULayoutSectionListSampler : PULayoutSectionSampler {

	int _numberOfVisibleItems;
	int _numberOfRealItems;
	int* _visibleItemIndexes;
	int _lastSeenSampledIndex;
	int _lastSeenUnsampledIndex;
	int _lastSeenTopUnsampledIndex;

}
-(void)dealloc;
-(int)indexForUnsampledIndex:(int)arg1 isMainItem:(BOOL*)arg2 ;
-(int)unsampledIndexForIndex:(int)arg1 ;
-(void)enumerateUnsampledIndexesForSampledIndexInRange:(NSRange)arg1 usingBlock:(/*^block*/ id)arg2 ;
-(void)dumpInternalMemory;
-(id)initWithNumberOfVisibleItems:(int)arg1 numberOfRealItems:(int)arg2 ;
-(int*)visibleItemIndexes;
@end
