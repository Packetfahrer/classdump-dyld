/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:19 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class WDTableProperties, WDCharacterProperties;

@interface WDTableRowProperties : NSObject <NSCopying> {

	WDTableProperties* mTableProperties;
	WDCharacterProperties* mCharacterProperties;
	unsigned mOriginal : 1;
	unsigned mTracked : 1;
	unsigned mResolved : 1;
	SCD_Struct_WD69 mOriginalProperties;
	SCD_Struct_WD69 mTrackedProperties;

}
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(long)height;
-(id).cxx_construct;
-(id)initWithDocument:(id)arg1 ;
-(void)setHeight:(long)arg1 ;
-(id)characterProperties;
-(BOOL)isHeightOverridden;
-(id)tableProperties;
-(BOOL)header;
-(void)setHeader:(BOOL)arg1 ;
-(void)setResolveMode:(int)arg1 ;
-(int)resolveMode;
-(void)setWidthBefore:(short)arg1 ;
-(void)setWidthBeforeType:(int)arg1 ;
-(void)setWidthAfter:(short)arg1 ;
-(void)setWidthAfterType:(int)arg1 ;
-(void)setHeightType:(int)arg1 ;
-(BOOL)isWidthBeforeOverridden;
-(short)widthBefore;
-(BOOL)isWidthBeforeTypeOverridden;
-(int)widthBeforeType;
-(BOOL)isWidthAfterOverridden;
-(short)widthAfter;
-(BOOL)isWidthAfterTypeOverridden;
-(int)widthAfterType;
-(BOOL)isHeaderOverridden;
-(BOOL)isHeightTypeOverridden;
-(int)heightType;
-(void)addPropertiesValues:(SCD_Struct_WD69*)arg1 to:(SCD_Struct_WD69*)arg2 ;
-(void)addProperties:(id)arg1 ;
@end
