/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:25 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PhotoLibraryServices/PLImageSource.h>

@interface PLPhotoLibraryImageSource : PLImageSource {

	int _imageFormat;

}

@property (nonatomic,readonly) int imageFormat; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(int)imageFormat;
-(id)newImageForAsset:(id)arg1 createMetadata:(id*)arg2 ;
-(unsigned short)sourceIdentifier;
-(id)initWithImageFormat:(int)arg1 ;
@end
