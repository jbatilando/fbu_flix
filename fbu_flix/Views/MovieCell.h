//
//  MovieCell.h
//  fbu_flix
//
//  Created by Miguel Batilando on 5/21/19.
//  Copyright © 2019 Miguel Batilando. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Movie.h"

NS_ASSUME_NONNULL_BEGIN

@interface MovieCell : UITableViewCell
// MARK: IBOutlets
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UILabel *overviewLabel;
@property (weak, nonatomic) IBOutlet UIImageView *posterView;
@property (nonatomic, strong) Movie *movie;

- (void)setMovie:(Movie *)movie ;
@end

NS_ASSUME_NONNULL_END
