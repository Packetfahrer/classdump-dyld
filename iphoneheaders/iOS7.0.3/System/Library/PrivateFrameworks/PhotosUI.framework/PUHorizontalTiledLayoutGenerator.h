/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUTiledLayoutGenerator.h>

@interface PUHorizontalTiledLayoutGenerator : PUTiledLayoutGenerator {

	CGPoint _origin;
	float _referenceHeight;

}

@property (assign,nonatomic) float referenceHeight;              //@synthesize referenceHeight=_referenceHeight - In the implementation block
-(void)setReferenceHeight:(float)arg1 ;
-(void)willParseTiles;
-(BOOL)parseNextTiles;
-(float)referenceDistanceForMagneticGuidelines;
-(BOOL)_parseSpecialSequence;
-(BOOL)_parseSpecialTileTriplet;
-(BOOL)_parseTileTriplet;
-(BOOL)_parseTilePair;
-(BOOL)_parseSingleTile;
-(BOOL)_scanTripletWithLargeLead:(SCD_Struct_PU15*)arg1 ;
-(BOOL)_scanSpecialSequenceBlock:(SCD_Struct_PU15*)arg1 ;
-(BOOL)_addSpecialSequenceBlock:(SCD_Struct_PU15*)arg1 ;
-(BOOL)_scanNonPanoramaSequence:(SCD_Struct_PU15*)arg1 count:(int)arg2 ;
-(float)referenceHeight;
-(BOOL)_addColumnWithTiles:(SCD_Struct_PU15*)arg1 imageFrames:(CGRect*)arg2 count:(int)arg3 ;
-(BOOL)_addColumnWithContiguousTiles:(SCD_Struct_PU15*)arg1 count:(int)arg2 ;
-(BOOL)_hasLeftSuboptimalColumn;
-(BOOL)_parseSpecialSubsequenceWithColumnRequired:(BOOL)arg1 columnParsed:(BOOL*)arg2 ;
-(BOOL)_scanSpecialSequenceColumn:(SCD_Struct_PU15*)arg1 count:(int*)arg2 ;
-(BOOL)_isAtEndOfColumn;
-(void)_enumerateColumnFramesWithContiguousTiles:(SCD_Struct_PU15*)arg1 count:(int)arg2 useMagneticGuidelines:(BOOL)arg3 block:(/*^block*/ id)arg4 ;
@end
