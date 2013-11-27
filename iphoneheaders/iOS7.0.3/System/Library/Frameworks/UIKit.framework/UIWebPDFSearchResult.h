/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <UIKit/UIKit-Structs.h>
@class NSArray, NSString;

@interface UIWebPDFSearchResult : NSObject {

	NSArray* rotationAngles;
	unsigned pageIndex;
	NSArray* strings;
	NSString* string;
	NSArray* rects;
	CGRect boundingBox;

}

@property (assign,nonatomic) unsigned pageIndex; 
@property (nonatomic,retain) NSString * string; 
@property (assign,nonatomic) CGRect boundingBox; 
@property (nonatomic,retain) NSArray * strings; 
@property (nonatomic,retain) NSArray * rects; 
@property (nonatomic,retain) NSArray * rotationAngles; 
-(id)string;
-(void)setString:(id)arg1 ;
-(void)setStrings:(id)arg1 ;
-(id)strings;
-(void)setRects:(id)arg1 ;
-(id)rects;
-(CGRect)boundingBox;
-(id)rotationAngles;
-(unsigned)pageIndex;
-(void)setRotationAngles:(id)arg1 ;
-(void)setPageIndex:(unsigned)arg1 ;
-(void)setBoundingBox:(CGRect)arg1 ;
@end
