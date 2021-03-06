/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class MPImageCache, MPImageCacheRequest, MPTimeMarker, UIImage;

@interface MPVideoChapterCellContentView : UIView
{
    unsigned int _current:1;
    unsigned int _index;
    unsigned int _selected:1;
    unsigned int _showThumbnailColumn:1;
    float _timeColumnWidth;
    MPTimeMarker *_timeMarker;
    UIImage *_artwork;
    MPImageCache *_artworkImageCache;
    MPImageCacheRequest *_artworkImageRequest;
}

@property(retain, nonatomic) MPImageCache *artworkImageCache; // @synthesize artworkImageCache=_artworkImageCache;
@property(retain, nonatomic) UIImage *artwork; // @synthesize artwork=_artwork;
@property(retain, nonatomic) MPTimeMarker *timeMarker; // @synthesize timeMarker=_timeMarker;
@property(nonatomic) float timeColumnWidth; // @synthesize timeColumnWidth=_timeColumnWidth;
@property(nonatomic) unsigned int index; // @synthesize index=_index;
- (void)setArtworkImageRequest:(id)arg1 artworkLoadCompletionHandler:(id)arg2;
@property(nonatomic) BOOL showThumbnailColumn;
@property(nonatomic, getter=isSelected) BOOL selected;
@property(nonatomic, getter=isCurrent) BOOL current;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;

@end

