/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <PhotosUI/PhotosUI-Structs.h>
@class NSIndexSet, NSArray, NSIndexPath;

@interface PUTransitionSectionInfo : NSObject {

	int _transitionSection;
	NSIndexSet* _visualSections;
	NSArray* _visualRowStartMarkers;
	int _contiguousRows;
	NSIndexPath* _anchorRealPath;
	PUGridCoordinates _anchorShiftOffset;

}

@property (assign,nonatomic) int transitionSection;                            //@synthesize transitionSection=_transitionSection - In the implementation block
@property (nonatomic,retain) NSIndexSet * visualSections;                      //@synthesize visualSections=_visualSections - In the implementation block
@property (nonatomic,retain) NSArray * visualRowStartMarkers;                  //@synthesize visualRowStartMarkers=_visualRowStartMarkers - In the implementation block
@property (assign,nonatomic) int contiguousRows;                               //@synthesize contiguousRows=_contiguousRows - In the implementation block
@property (nonatomic,retain) NSIndexPath * anchorRealPath;                     //@synthesize anchorRealPath=_anchorRealPath - In the implementation block
@property (assign,nonatomic) PUGridCoordinates anchorShiftOffset;              //@synthesize anchorShiftOffset=_anchorShiftOffset - In the implementation block
-(id)init;
-(id)description;
-(int)transitionSection;
-(void)setTransitionSection:(int)arg1 ;
-(id)visualSections;
-(void)setVisualSections:(id)arg1 ;
-(id)visualRowStartMarkers;
-(void)setVisualRowStartMarkers:(id)arg1 ;
-(int)contiguousRows;
-(void)setContiguousRows:(int)arg1 ;
-(id)anchorRealPath;
-(void)setAnchorRealPath:(id)arg1 ;
-(PUGridCoordinates)anchorShiftOffset;
-(void)setAnchorShiftOffset:(PUGridCoordinates)arg1 ;
-(void).cxx_destruct;
@end
