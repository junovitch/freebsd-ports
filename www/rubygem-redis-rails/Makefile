# $FreeBSD$

PORTNAME=	redis-rails
PORTVERSION=	4.0.0
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Redis for Ruby on Rails

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS=	rubygem-redis-actionpack>=4:${PORTSDIR}/databases/rubygem-redis-actionpack \
		rubygem-redis-activesupport>=4:${PORTSDIR}/devel/rubygem-redis-activesupport \
		rubygem-redis-store>=1.1.0:${PORTSDIR}/devel/rubygem-redis-store

NO_ARCH=	yes
USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.mk>
