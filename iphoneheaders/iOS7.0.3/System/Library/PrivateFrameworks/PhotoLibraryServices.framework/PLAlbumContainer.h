/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol PLAlbumContainer <PLAssetContainerList>
@property (nonatomic,readonly) unsigned albumsCount; 
@property (nonatomic,readonly) id albumsSortingComparator; 
@property (nonatomic,readonly) int filter; 
@property (nonatomic,readonly) unsigned unreadAlbumsCount; 
@property (nonatomic,readonly) NSString * _prettyDescription; 
@property (nonatomic,readonly) NSString * _typeDescription; 
@required
-(id)identifier;
-(id)_typeDescription;
-(id)albums;
-(unsigned)albumsCount;
-(id)_prettyDescription;
-(int)albumListType;
-(BOOL)hasAtLeastOneAlbum;
-(BOOL)canEditAlbums;
-(/*^block*/ id)albumsSortingComparator;
-(BOOL)albumHasFixedOrder:(NSObject*)arg1;
-(void)setNeedsReordering;
-(BOOL)needsReordering;
-(void)updateAlbumsOrderIfNeeded;
-(unsigned)unreadAlbumsCount;
-(int)filter;
@end

