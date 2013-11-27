/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:55 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <OfficeImport/EDImmutableObject.h>

@interface EDAlignmentInfo : NSObject <NSCopying, EDImmutableObject> {

	int mHorizontalAlignment;
	int mVerticalAlignment;
	int mIndent;
	int mTextRotation;
	bool mTextWrapped;
	bool mHorizontalAlignOverridden;
	bool mVerticalAlignOverridden;
	bool mIndentOverridden;
	bool mTextWrappedOveridden;
	bool mDoNotModify;

}
+(id)alignmentInfo;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(bool)isVerticalAlignOverridden;
-(int)verticalAlignment;
-(void)setIndent:(int)arg1 ;
-(bool)isHorizontalAlignOverridden;
-(int)horizontalAlignment;
-(bool)isTextWrapped;
-(int)textRotation;
-(int)indent;
-(bool)isTextWrappedOverridden;
-(bool)isIndentOverridden;
-(void)setHorizontalAlignment:(int)arg1 ;
-(void)setVerticalAlignment:(int)arg1 ;
-(void)setTextWrapped:(bool)arg1 ;
-(void)setTextRotation:(int)arg1 ;
-(BOOL)isEqualToAlignmentInfo:(id)arg1 ;
-(void)setDoNotModify:(bool)arg1 ;
@end
