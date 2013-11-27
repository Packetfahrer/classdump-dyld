/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, TDThemeBitSource;

@interface TDAsset : NSManagedObject {

	unsigned _scaleFactor;

}

@property (nonatomic,@dynamic,retain) NSString * name; 
@property (nonatomic,@dynamic,retain) NSString * category; 
@property (nonatomic,@dynamic,retain) TDThemeBitSource * source; 
@property (nonatomic,readonly) NSString * baseName; 
+(id)_filenameRegex;
+(unsigned)scaleFactorFromImageFilename:(id)arg1 ;
+(int)idiomFromImageFilename:(id)arg1 ;
+(int)subtypeFromImageFilename:(id)arg1 ;
-(unsigned)scaleFactor;
-(id)baseName;
-(id)fileURLWithDocument:(id)arg1 ;
-(BOOL)hasProduction;
-(id)_sourceRelativePathComponents;
-(id)sourceRelativePath;
-(void)setHasProduction:(id)arg1 ;
-(void)setScaleFactor:(unsigned)arg1 ;
@end
