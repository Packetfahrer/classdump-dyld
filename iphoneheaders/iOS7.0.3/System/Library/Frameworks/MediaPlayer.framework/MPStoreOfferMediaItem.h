/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPNondurableMediaItem.h>
#import <CoreFoundation/NSSecureCoding.h>
#import <CoreFoundation/NSCopying.h>

@class NSDictionary, MPStoreOfferContentRating;

@interface MPStoreOfferMediaItem : MPNondurableMediaItem <NSSecureCoding, NSCopying> {

	NSDictionary* _lookupCollectionPropertyValues;
	unsigned _indexInCollectionItems;
	int _preferredStoreOfferVariant;
	MPStoreOfferContentRating* _contentRating;

}
+(BOOL)canFilterByProperty:(id)arg1 ;
+(id)defaultPropertyValues;
+(BOOL)canRequestStoreOfferForLocalMediaItems:(id)arg1 ;
+(BOOL)hasMediaItemValuesForStoreLookupCollectionPropertyValues:(id)arg1 itemIndex:(unsigned)arg2 ;
+(id)mediaValueForStoreLookupCollectionPropertyValues:(id)arg1 itemIndex:(unsigned)arg2 mediaProperty:(id)arg3 ;
+(id)contentRatingForCollectionPropertyValues:(id)arg1 itemIndex:(unsigned)arg2 ;
+(BOOL)canMergeStoreOfferWithLocalMediaItems:(id)arg1 ;
+(id)offerDictionariesForLookupCollectionPropertyValues:(id)arg1 itemIndex:(unsigned)arg2 ;
+(id)mediaItemsWithStoreLookupCollectionPropertyValues:(id)arg1 preferredStoreOfferVariant:(int)arg2 ;
+(id)mediaItemsByMergingStoreOfferMediaItems:(id)arg1 localItems:(id)arg2 ;
+(id)mediaitemsByRemovingRestrictedContentFromMediaItems:(id)arg1 ;
+(id)preferredAssetDictionaryInOfferDictionary:(id)arg1 ;
+(id)collectionLookupKeyForMediaProperty:(id)arg1 ;
+(id)itemLookupKeyForMediaProperty:(id)arg1 ;
+(id)offerLookupKeyForItemMediaProperty:(id)arg1 ;
+(id)offerDictionaryWithPreferredAssetDictionaryInItemResponseDictionary:(id)arg1 ;
+(id)assetLookupKeyForItemMediaProperty:(id)arg1 ;
+(id)localRepresentativeItemPropertyForMediaProperty:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)mediaLibrary;
-(int)preferredStoreOfferVariant;
-(id)initWithLookupLookupCollectionPropertyValues:(id)arg1 preferredStoreOfferVariant:(int)arg2 itemID:(id)arg3 itemIndex:(unsigned)arg4 ;
-(id)buyOfferForVariant:(int)arg1 ;
-(BOOL)_offeredItemAlreadyExists;
-(id)_lookupOfferDictionaries;
-(BOOL)isDownloadable;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)valueForProperty:(id)arg1 ;
-(BOOL)setValue:(id)arg1 forProperty:(id)arg2 ;
-(void).cxx_destruct;
@end
