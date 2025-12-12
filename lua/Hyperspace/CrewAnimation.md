---
layout: lua
title: CrewAnimation
lang: en
---

# Class "CrewAnimation"


## Constructors
{: #Constructors .lua-content-section}
### CrewAnimation ()
{: #CrewAnimation .lua-content-item aria-label='Constructors' }
#### [CrewAnimation](../Hyperspace/CrewAnimation) CrewAnimation ()
{: aria-label='Constructors' }

___
### CrewAnimation ()
{: #CrewAnimation .lua-content-item aria-label='Constructors' }
#### [CrewAnimation](../Hyperspace/CrewAnimation) CrewAnimation (integer _shipId, string _race, [Pointf](../Hyperspace/Pointf) _unk, integer _hostile)
{: aria-label='Constructors' }

___




## Methods
{: #Methods .lua-content-section}
### CustomDeath ()
{: #CustomDeath .lua-content-item aria-label='Methods' }
#### boolean :CustomDeath ()
{: aria-label='Methods' }

___
### FireShot ()
{: #FireShot .lua-content-item aria-label='Methods' }
#### boolean :FireShot ()
{: aria-label='Methods' }

___
### GetDeathSound ()
{: #GetDeathSound .lua-content-item aria-label='Methods' }
#### string :GetDeathSound ()
{: aria-label='Methods' }

___
### GetFiringFrame ()
{: #GetFiringFrame .lua-content-item aria-label='Methods' }
#### integer :GetFiringFrame ()
{: aria-label='Methods' }

___
### GetShootingSound ()
{: #GetShootingSound .lua-content-item aria-label='Methods' }
#### string :GetShootingSound ()
{: aria-label='Methods' }

___
### OnInit ()
{: #OnInit .lua-content-item aria-label='Methods' }
#### void :OnInit (string name, [Pointf](../Hyperspace/Pointf) position, boolean enemy)
{: aria-label='Methods' }

___
### OnRender ()
{: #OnRender .lua-content-item aria-label='Methods' }
#### void :OnRender (number scale, integer selectedState, boolean outlineOnly)
{: aria-label='Methods' }

___
### OnRenderProps ()
{: #OnRenderProps .lua-content-item aria-label='Methods' }
#### void :OnRenderProps ()
{: aria-label='Methods' }

___
### OnUpdate ()
{: #OnUpdate .lua-content-item aria-label='Methods' }
#### void :OnUpdate ([Pointf](../Hyperspace/Pointf) position, boolean moving, boolean fighting, boolean repairing, boolean dying, boolean onFire)
{: aria-label='Methods' }

___
### OnUpdateEffects ()
{: #OnUpdateEffects .lua-content-item aria-label='Methods' }
#### void :OnUpdateEffects ()
{: aria-label='Methods' }

___
### RenderIcon ()
{: #RenderIcon .lua-content-item aria-label='Methods' }
#### void :RenderIcon (boolean border)
{: aria-label='Methods' }

___
### Restart ()
{: #Restart .lua-content-item aria-label='Methods' }
#### void :Restart ()
{: aria-label='Methods' }

___
### SetupStrips ()
{: #SetupStrips .lua-content-item aria-label='Methods' }
#### void :SetupStrips ()
{: aria-label='Methods' }

___
### UpdateFiring ()
{: #UpdateFiring .lua-content-item aria-label='Methods' }
#### void :UpdateFiring ()
{: aria-label='Methods' }

___
### UpdateShooting ()
{: #UpdateShooting .lua-content-item aria-label='Methods' }
#### void :UpdateShooting ()
{: aria-label='Methods' }

___


## Fields
{: #Fields .lua-content-section}
### anims
{: #anims .lua-content-item aria-label='Fields' }
#### vector\<vector\<[Animation](../Hyperspace/Animation)\>\> .anims
{: aria-label='Fields' }

___
### bDoorTarget
{: #bDoorTarget .lua-content-item aria-label='Fields' }
#### boolean .bDoorTarget
{: aria-label='Fields' }

___
### bDrone
{: #bDrone .lua-content-item aria-label='Fields' }
#### boolean .bDrone
{: aria-label='Fields' }

___
### bExactShooting
{: #bExactShooting .lua-content-item aria-label='Fields' }
#### boolean .bExactShooting
{: aria-label='Fields' }

___
### bFrozen
{: #bFrozen .lua-content-item aria-label='Fields' }
#### boolean .bFrozen
{: aria-label='Fields' }

___
### bGhost
{: #bGhost .lua-content-item aria-label='Fields' }
#### boolean .bGhost
{: aria-label='Fields' }

___
### bMale
{: #bMale .lua-content-item aria-label='Fields' }
#### boolean .bMale
{: aria-label='Fields' }

___
### bPlayer
{: #bPlayer .lua-content-item aria-label='Fields' }
#### boolean .bPlayer
{: aria-label='Fields' }

___
### bSharedSpot
{: #bSharedSpot .lua-content-item aria-label='Fields' }
#### boolean .bSharedSpot
{: aria-label='Fields' }

___
### bStunned
{: #bStunned .lua-content-item aria-label='Fields' }
#### boolean .bStunned
{: aria-label='Fields' }

___
### bTyping
{: #bTyping .lua-content-item aria-label='Fields' }
#### boolean .bTyping
{: aria-label='Fields' }

___
### baseStrip
{: #baseStrip .lua-content-item aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .baseStrip
{: aria-label='Fields' }

___
### colorStrip
{: #colorStrip .lua-content-item aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .colorStrip
{: aria-label='Fields' }

___
### colorblind
{: #colorblind .lua-content-item aria-label='Fields' }
#### boolean .colorblind
{: aria-label='Fields' }

___
### currentShip
{: #currentShip .lua-content-item aria-label='Fields' }
#### integer .currentShip
{: aria-label='Fields' }

___
### direction
{: #direction .lua-content-item aria-label='Fields' }
#### integer .direction
{: aria-label='Fields' }

___
### fDamageDone
{: #fDamageDone .lua-content-item aria-label='Fields' }
#### number .fDamageDone
{: aria-label='Fields' }

___
### forcedAnimation
{: #forcedAnimation .lua-content-item aria-label='Fields' }
#### integer .forcedAnimation
{: aria-label='Fields' }

___
### forcedDirection
{: #forcedDirection .lua-content-item aria-label='Fields' }
#### integer .forcedDirection
{: aria-label='Fields' }

___
### iShipId
{: #iShipId .lua-content-item aria-label='Fields' }
#### integer .iShipId
{: aria-label='Fields' }

___
### lastPosition
{: #lastPosition .lua-content-item aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .lastPosition
{: aria-label='Fields' }

___
### layerColors
{: #layerColors .lua-content-item aria-label='Fields' }
#### vector\<[GL_Color](../Graphics/GL_Color)\> .layerColors
{: aria-label='Fields' }

___
### layerStrips
{: #layerStrips .lua-content-item aria-label='Fields' }
#### vector\<[GL_Texture](../Graphics/GL_Texture)\> .layerStrips
{: aria-label='Fields' }

___
### moveDirection
{: #moveDirection .lua-content-item aria-label='Fields' }
#### integer .moveDirection
{: aria-label='Fields' }

___
### projectile
{: #projectile .lua-content-item aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .projectile
{: aria-label='Fields' }

___
### projectileColor
{: #projectileColor .lua-content-item aria-label='Fields' }
#### [GL_Color](../Graphics/GL_Color) .projectileColor
{: aria-label='Fields' }

___
### punchTimer
{: #punchTimer .lua-content-item aria-label='Fields' }
#### [TimerHelper](../Hyperspace/TimerHelper) .punchTimer
{: aria-label='Fields' }

___
### race
{: #race .lua-content-item aria-label='Fields' }
#### string .race
{: aria-label='Fields' }

___
### shootTimer
{: #shootTimer .lua-content-item aria-label='Fields' }
#### [TimerHelper](../Hyperspace/TimerHelper) .shootTimer
{: aria-label='Fields' }

___
### smokeEmitter
{: #smokeEmitter .lua-content-item aria-label='Fields' }
#### ParticleEmitter .smokeEmitter
{: aria-label='Fields' }

___
### status
{: #status .lua-content-item aria-label='Fields' }
#### integer .status
{: aria-label='Fields' }

___
### sub_direction
{: #sub_direction .lua-content-item aria-label='Fields' }
#### integer .sub_direction
{: aria-label='Fields' }

___
### target
{: #target .lua-content-item aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .target
{: aria-label='Fields' }

___
### uniqueBool1
{: #uniqueBool1 .lua-content-item aria-label='Fields' }
#### boolean .uniqueBool1
{: aria-label='Fields' }

___
### uniqueBool2
{: #uniqueBool2 .lua-content-item aria-label='Fields' }
#### boolean .uniqueBool2
{: aria-label='Fields' }

___
